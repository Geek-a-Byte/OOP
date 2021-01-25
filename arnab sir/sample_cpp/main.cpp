#include <iostream>
using namespace std;

class shape
{
public:
    virtual double getarea() = 0;
};
class triangle : public shape
{
public:
    int height, base;
    virtual double getarea()
    {
        return 0.5 * height * base;
    }
};
class circle : public shape
{
public:
    int radius;
    virtual double getarea()
    {
        return 3.14 * radius;
    }
};
void show(shape *obj)
{
    cout << "area is " << obj->getarea() << endl;
}
int main()
{
    triangle t1;
    t1.height = 10;
    t1.base = 20;
    show(&t1);
    circle c1;
    c1.radius = 10;
    show(&c1);
    //shape s1;
    //  show(&s1);
}
