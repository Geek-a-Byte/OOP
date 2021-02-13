//!pure virtual function -
// A function that does not have any definition in the class where it is declared
// but will have its definition later in its hierarchy (one of the derived classes)

//! abstract class -
//a class containing at least one pure virtual function

//! concrete class -
//a class with no pure virtual function

/*
suppose we need a function to return the area of a shape.
however as the area is different for different shapes, 
we need to redefine the formula of area every time we want to calculate the area of a diff shape. 
therefore the pvf getarea() needs to be implemented differently by each sub class or derived class
*/
//!REMINDER: return type of each and every definition of virtual class needs to be the same
#include <iostream>
using namespace std;

class shape // abstract class or interface
{
public:
    virtual double getarea() = 0; // "pure specifier"  - pure virtual function
};
class triangle : public shape //concrete
{
public:
    int height, base;
    double getarea()
    {
        return 0.5 * height * base;
    }
};
class circle : public shape //concrete
{
public:
    int radius;
    double getarea()
    {
        return 3.14 * radius * radius;
    }
};
void show(shape *obj)
{
    /*
    Derived d1;  //obj of derived class
    base *b1;    //pointer of base cls
    b1 = &d1;    //base class pointer pointing to derived class pointer
    b1->print(); //print() of derived class is being called upon, 
    so it depends on the type of object which is pointed to, not the type of pointer
    */
    cout << "area is " << obj->getarea() << endl;
}

int main()
{
    triangle t;
    t.height = 10;
    t.base = 20;
    show(&t);

    circle c;
    c.radius = 5;
    show(&c);

    return 0;
}
