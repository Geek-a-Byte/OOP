// virtual destructor - when we dynamically allocate a derived object using base pointer,
//only the destructor of base class will be called as it is early binded.
//To call the destructor of derived class
// we need to declare the base destructor as virtual (late binding)..
#include <iostream>
using namespace std;

class base1
{
public:
    base1()
    {
        cout << "hello from base" << endl;
    }
    virtual ~base1() // late binding
    {
        cout << "exit from base" << endl;
    }
};
class derived1 : public base1
{
public:
    derived1()
    {
        cout << "Hello from derived class" << endl;
    }
    ~derived1() // late binding
    {
        cout << "exit from derived" << endl;
    }
};

int main()
{
    base1 *ptr;           // ptr to base class is created.
    ptr = new derived1(); //
    delete ptr;           // only base is called, as compiler will early bind the destructor of base
    return 0;
}
