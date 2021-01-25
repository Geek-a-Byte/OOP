#include <iostream>
using namespace std;
//early binding is //faster than late binding as it takes place in compile time
//vtable (virtual table)-> it is an array that holds the address of all the virtual functions in a class
//vptr->vptr is a pointer that holds the address of the array inside the class
//virtual functions are mapped in runtime
//other functions are mapped in compiletime
class base1
{
public:
    virtual void f1()
    {
        cout << "f1 is called" << endl;
    }
    virtual void show()
    {
        cout << " Hello from base class " << endl;
    }
};
class derived1 : public base1
{               //private e kokhono virtual function rakha uchit na jekhane sensitive data thake, naile ptr diye runtime e access kore fela jabe
private:        //access specifier gula compile time ei check hoy, runtime e jokhon pointer diye virtual func ke access korte chay tai access korte pare, as tokhon ar acsess spcefier check hoy na
    void show() // vtable2 will b created which will store the adress of show() fn in derived class..vptr will be inherited.
    {
        cout << " Hello from derived class..this is private version.." << endl;
    }

public:
    void f1()
    {
        cout << "f1 is overrided" << endl;
    }
};

int main()
{
    base1 b;
    derived1 d;

    base1 *ptr;
    ptr = &b;
    ptr->f1();
    ptr->show();

    ptr = &d;
    ptr->f1();
    ptr->show(); // accessing private member from main()..how ????...answer - "because acess specifier is checked only during compile time."
    return 0;
}
