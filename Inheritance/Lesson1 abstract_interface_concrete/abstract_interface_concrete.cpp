//very imp source: https://www.codesdope.com/cpp-virtual-and-abstract/
/*
//*Runtime polymorphism
Runtime polymorphism is also known as dynamic polymorphism. 
In runtime polymorphism, the compiler matches the function call with the correct 
function definition at runtime, it is also called late binding/dynamic binding/runtime binding
In C++, runtime polymorphism is implemented using method overriding. 
in late binding, the compiler identifies the type of object at runtime and then matches the function
call with correct function definition.this can be achieved by virtual function in base class which is 
overridden in one of the derived classes or variable overriding

//*compile time polymorphism
In compile time or static polymorphism or 
early binding, the compiler matches the function call
with the function definition which has been called during compile time.
It is also known as Static Binding or Compile-time Binding.

i.e the compiler matches the function call considering the type of pointer
 and not considering the type of object which it is pointing to
*/

/*
//*Function overriding
If derived class re-defines same function as defined in its base class, 
it is known as function overriding in C++. It is used to achieve runtime polymorphism. 
It enables you to provide specific implementation of the base class function.

The second thing is that the function from a base class that we are overriding 
should have the same signature or prototype 
i.e. it should have the same name, same return type and same argument list.
*/

/*
//*VIRTUAL FUNCTION
//*1.A virtual function is a member function which is declared/defined in the base class 
  using the keyword virtual 
  and is re-defined (Overriden) by the derived class.
//*2.SYNTAX: virtual<func_type><func_name>() {}
//*3.Classes having virtual functions are not abstract i.e it can be instantiated.Definition is given in base class.
//*4.All derived class may or may not redefine virtual function of base class.
//*virtual functions are called according to the type of the obj instance pointed to or referenced 
   not according to the type of the pointer or reference
//*5.example : https://www.programiz.com/cpp-programming/virtual-functions
//*here when base class pointer is pointing to derived class object then the print() of derived class is being called upon, so
   it depends on the type of object which is pointed to , not the type of pointers
*/

/*
//*PURE VIRTUAL FUNCTION
//*1.A pure virtual function is a member function of base class 
whose only declaration is provided in base class 
and should be defined in derived class otherwise derived class also becomes abstract.

//*2.SYNTAX: virtual<func_type><func_name>() = 0; 
//*3.Base class having pure virtual function becomes abstract i.e. it cannot be instantiated.No definition is given in base class.
//*4.If derived class do not redefine pure virtual function of base class,
   then no compilation error but derived class also becomes abstract just like the base class.
//*5.a pure virtual function (or abstract function) has no body at all
*/

/*
//*ABSTRACT CLASS
//*1.An abstract class has at least one abstract function (pure virtual function).
//*2.Abstract class is also known as abstract base class.
//*3.In an abstract class, we can also have other functions and variables apart from pure virtual function.(diff with interface)
//*4.Subclasses of an abstract base class must define the abstract function(pure v.f of abstract base class), otherwise, they will also become abstract classes.
//*5.An abstract class is a class whose instances (objects) can't be made. We can only make objects of its subclass (if they are not abstract). 
//*6.abstract classes can have constructors
//*7.we can create a reference variable of an abstract class, 
   that reference var can be used to refer to the objects of derived class
//*ex:Derived d1; base* b1; b1=&d1; BUT we cant write base b1; as base is an abstract class it will not have objects
//*8.abstract class is used to provide abstraction to the code 
meaning to hide the implementation and show the function definition to the user only
*/

/*
//*INTERFACE
//*1.Interface or Interface class is an ABSTRACT CLASS which has no member variables 
//*2.and all its functions are pure virtual and  
//*3.Its derived classes must provide definition to each of the pure virtual functions of the base class.
//*4.Like an abstract class, we can't create objects of an interface.
//*Name of an interface class often begins with the letter I.example Ishape
//*interfaces cannot have constructors(as cons are member functions but not pvf) 

*/

/*
//*CONCRETE CLASS
//*A concrete class is an ordinary class which has no purely virtual functions and hence can be instantiated(I.E CAN HAVE OBJECTS OF ITS OWN).
*/
#include <iostream>
using namespace std;

class base
{
public:
    base()
    {
        cout << "base\n";
    }
    //if the base() is commented out this class would be an interface otherwise it is abstract
    virtual void f1() = 0; // pure virtual function
    virtual void f2() = 0; // pure virtual function
};
class derived1 : public base // abstract class - derived1 has no f2() definition
{
public:
    derived1()
    {
        cout << "derived1  default constructor\n";
    }
    void f1()
    {
        cout << "f1 is defined\n";
    }
};
class derived2 : public derived1 //concrete class .. because f1() was already defined in derived1
{
public:
    derived2()
    {
        cout << "derived2 default constructor\n";
    }
    void f2()
    {
        cout << "f2 is defined" << endl;
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
/*
base
derived1  default constructor
derived2 default constructor
f1 is defined
f2 is defined
*/