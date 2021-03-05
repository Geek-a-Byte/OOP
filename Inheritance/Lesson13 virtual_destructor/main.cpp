// virtual destructor - when we dynamically allocate a derived object using base pointer,
//only the destructor of base class will be called as it is early binded.
//To call the destructor of derived class
// we need to declare the base destructor as virtual (late binding)..
//https://www.geeksforgeeks.org/virtual-destructor/

/*
Deleting a derived class object using a pointer of base class type that has a non-virtual destructor 
results in undefined behavior. To correct this situation, 
the base class should be defined with a virtual destructor.
Making base class destructor virtual guarantees that the object of derived class is destructed properly
i.e., both base class and derived class destructors are called.  
*/
#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "hello from base" << endl;
    }
    virtual ~base() // late binding
    {
        cout << "exit from base" << endl;
    }
};
class derived1 : public base
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

//! reminder : khali pointer declare korar jonno constructor destructor call hoyna;
int main()
{

    base *ptr, *ptr2;     // ptr to base class is created.
    ptr = new derived1(); //

    derived1 *d = new derived1();
    ptr2 = d;

    delete ptr; // only base is called if not virtual destructor of base class,
                // as compiler will early bind the destructor of base
    delete ptr2;
    return 0;
}
/*
o/p:
hello from base
Hello from derived class
hello from base
Hello from derived class
exit from derived
exit from base
exit from derived
exit from base
*/
