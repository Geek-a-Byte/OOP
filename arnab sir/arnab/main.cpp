#include <iostream>
using namespace std;
class ground
{
public:
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
int main()
{
    ground g;
    first f;
    calldisplay(g); //ground floor
    calldisplay(f); //will print ground floor because of early binding
}
