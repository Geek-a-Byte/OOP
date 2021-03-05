#include <iostream>
using namespace std;

class Base
{
protected:
    int i;

public:
    Base(int a)
    {
        i = a; //33
    }
    virtual void display()
    {
        printf("%p", &display);

        cout << "I am Base class object, i = " << i << endl;
    }
};

class Derived : public Base
{
    //inherited i->45

    int j;

public:
    Derived(int a, int b) : Base(a)
    {
        j = b; //54
    }
    void display()
    {
        printf("%p", &display);
        cout << "I am Derived class object, i = "
             << i << ", j = " << j << endl;
    }
};

// Global method, Base class object is passed by value
void somefunc(Base *obj)
{
    obj->display();
}
void somefunc2(Base obj)
{
    obj.display();
}

void somefunc3(Base &obj)
{
    obj.display();
}

int main()
{
    Base b(33);
    Derived d(45, 54);
    somefunc(&b);
    somefunc(&d); //Object Slicing solution
    somefunc3(b);
    somefunc3(d);
    somefunc2(b);
    somefunc2(d); // Object Slicing, the member j of d is sliced off

    return 0;
}

/*
o/p:
00000001I am Base class object, i = 33
00000001I am Derived class object, i = 45, j = 54
00000001I am Base class object, i = 33
00000001I am Derived class object, i = 45, j = 54
00000001I am Base class object, i = 33
00000001I am Base class object, i = 45
*/