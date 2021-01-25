//! base - pure virtual functions - f1,f2
//! derived1 - f1() definition
//! derived2 - f2() definition
// !very very Imp note :
//!if you dont override a pure virtual function in a derived class,
//!that derived class also becomes abstarct
//! you have to identify which is concrete, abstract and interface

/*
//*ABSTRACT CLASS
//*1.An abstract class has at least one abstract function (pure virtual function).
//*2.Abstract class is also known as abstract base class.
//*3.In an abstract class, we can also have other functions and variables apart from pure virtual function.(diff with interface)
//*4.Subclasses of an abstract base class must define the abstract function(pure v.f of abstract base class), otherwise, they will also become abstract classes.
//*5.An abstract class is a class whose instances (objects) can't be made. We can only make objects of its subclass (if they are not abstract). 
*/

/*
//*INTERFACE
//*1.Interface or Interface class is aN ABSTRACT CLASS which has no member variables 
//*2.and all its functions are pure virtual and  
//*3.Its derived classes must provide definition to each of the pure virtual functions of the base class.
//*4.Like an abstract class, we can't create objects of an interface.
//*Name of an interface class often begins with the letter I.example Ishape
//*interfaces cannot have constructors(as cons are member functions but not pvf) while abstract classes can have constructors

*/

/*
//*CONCRETE CLASS
//*A concrete class is an ordinary class which has no purely virtual functions and hence can be instantiated(I.E CAN HAVE OBJECTS OF ITS OWN).
*/
#include <iostream>
using namespace std;

class base // interface
{
public:
    // base()
    // {
    //     cout << "base\n";
    // }
    virtual void f1() = 0; // pure virtual functions
    virtual void f2() = 0;
};
class derived1 : public base // abstract class - why - refer very imp note above -> derived 1 e f2() define kora hoy nai
{
public:
    derived1()
    {
        cout << "derived1\n";
    }
    void f1()
    {
        cout << "f1 is called" << endl;
    }
};
class derived2 : public derived1 //concrete class .. because f1() was already defined in derived1
{
public:
    derived2()
    {
        cout << "derived2\n";
    }
    void f2()
    {
        cout << "f2 is called" << endl;
    }
};

int main()
{
    //base b; //obj of an abstract base class is not allowed
    //derived1 d1;   not ok //derived1 is also abstract
    derived2 d2;
    d2.f1();
    d2.f2();
    return 0;
}
