//!Base class Parameterized Constructor in Derived class Constructor
/*
//*To call base class 's parameterised constructor 
inside derived class' s parameterised constructor,
we must mention it explicitly while declaring derived class's parameterized constructor.
*/
#include <iostream>
using namespace std;

class Base
{
    int x;

public:
    Base()
    {
        cout << "Base default constructor\n";
    }
    // parameterized constructor
    Base(int i)
    {
        x = i;
        cout << "Base Parameterized Constructor\n";
    }
};

class Derived : public Base
{
    int y;

public:
    Derived()
    {
        cout << "Derived default constructor\n";
    }
    // parameterized constructor
    Derived(int j) : Base(j) //mentioning it explicitly
    {
        y = j;
        cout << "Derived Parameterized Constructor\n";
    }
};

int main()
{
    Derived d1;
    Derived d(10);
}
/*
o/p:
Base default constructor
Derived default constructor
Base Parameterized Constructor
Derived Parameterized Constructor
*/