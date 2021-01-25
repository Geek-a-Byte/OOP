// object slicing - In CPP, when a derived object is copied into an object of base type,
// the modifications done in the derived class is not visible.."modifications are "sliced off"

#include <iostream>
using namespace std;

class base1
{
public:
    virtual void show() // virtual pawar shathe shathe vptr will be created which will map to vtable1// this show() wilol be handled in runtime as it is virtual
    {
        cout << " Hello from base class " << endl;
    }
};
class derived1 : public base1
{
public:
    void show() //after inhereting vtable2 will b created which will store the adress of show() fn in derived class..vptr will be inherited.
    {
        cout << " Hello from derived class" << endl;
    }
};
void display(base1 *b)
// Early binded function - 1.compiler matches the function call with the correct function definition at compile time...2) All functions are by default early binded..
{
    b->show();
}
int main()
{
    base1 b;
    display(&b);

    derived1 d;
    display(&d);
    return 0;
}
