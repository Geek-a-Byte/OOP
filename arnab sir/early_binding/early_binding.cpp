#include <iostream>
using namespace std;
class ground
{
public:
    int i;
    void display()
    {
        cout << "ground floor" << endl;
    }
};

class first : public ground
{
public:
    void display()
    {
        cout << "first floor" << endl;
    }
};
void calldisplay(ground p)
{
    p.display();
}
void calldisplayRef(ground *p)
{
    p->i = 10;
    cout << p->i << endl;
    p->display();
}
void calldisplayRef2(ground &p)
{
    p.display();
}
int main()
{
    //!case1:
    ground g;
    first f;
    calldisplay(g); //ground floor
    calldisplay(f); //will print ground floor because of early binding

    //!case2:
    ground *g1;
    g1 = &f;
    calldisplayRef(g1); //ground floor //...passing the address

    //!case3:
    calldisplayRef2(f); //ground floor//...passed as a reference to the func
}
//see 102 no slide of mila maam for clear concept
//When an object is passed to a func as a reference,no copy is made.
//When an object is passed to a func without reference/passed by value,a bitwise copy is made.//see slide 80