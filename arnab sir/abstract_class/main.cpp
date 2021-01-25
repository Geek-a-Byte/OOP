//pure virtual function - A function that does not have any definition in the class where it is declared but will have its definition later in its hierarchy (one of the derived classes)
// abstract class - a class containing at least one pure virtual function
// concrete class - a class with no pure virtual function

#include <iostream>
using namespace std;

class shape // abstract class or interface
{
public:
    virtual double getarea() = 0; // "pure specifier"  - pure virtual function
};
class triangle : public shape
{
public:
    int height, base;
    double getarea()
    {
        return 0.5 * height * base;
    }
};
class circle : public shape
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
