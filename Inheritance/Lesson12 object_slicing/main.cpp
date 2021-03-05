// object slicing - In CPP, when a derived object is copied into an object of base type,
// the modifications done in the derived class is not visible.."modifications are "sliced off"

/*

In C++, a derived class object can be assigned to a base class object, 
but the other way is not possible.
Object slicing happens when a derived class object is assigned to a base class object, 
additional attributes of a derived class object are sliced off to form the base class object.
class Base { int x, y; }; 

class Derived : public Base { int z, w; }; 

int main() 
{ 
	Derived d; 
	Base b = d; // Object Slicing, z and w of d are sliced off 
}

*/
//https://www.geeksforgeeks.org/object-slicing-in-c/
#include <iostream>
using namespace std;

class base1
{
public:
    virtual void show() // virtual pawar shathe shathe vptr will be created automatically by the compiler
                        //which will map to vtable1
                        //this show() will be handled in runtime as it is virtual
    {
        cout << "Hello from base class " << endl;
    }
};
class derived1 : public base1
{
    int j;

public:
    void f1()
    {
    }
    //vptr will be inherited
    void show() //after inhereting vtable2 will b created which will store the adress of show()
                //fn in derived class..vptr will be inherited.
    {
        cout << " Hello from derived class" << endl;
    }
};
void display(base1 *b)
// Early binded function -
//1.compiler matches the function call with the correct function definition at compile time...\
//2) All functions are by default early binded..
{
    b->show();
    // b.show();
}
void display3(base1 b)
{
    //b.f1(); //error -> derived class variable or function cant be accessed using base class obj
    //b.j;
    b.show();
}
int main()
{
    base1 b;
    display(&b); //hello from base class

    derived1 d;
    display(&d); //hello from derived class

    display3(b); //hello from base class
    display3(d); //hello from base class

    b = d;
    //b.j;//error
    //b.f1();//error

    // derived1 d;
    // base1 *b1;
    // b1 = &d;
    // display(b1); //hello from derived class //....virtual keyword na thakle hello from base class
}
