//Base class Default Constructor in Derived class Constructors
//*CASE 1:
//! Whenever you create derived class object,
//! first the base class default constructor is executed and
//! then the derived class's constructor finishes execution.

//*CASE 2
//!Whether derived class's default constructor is called
//!or parameterised is called,
//!base class's default constructor is always called inside them.

#include <iostream>
using namespace std;
class Base
{
    int x;

public:
    // default constructor
    Base()
    {
        cout << "Base default constructor\n";
    }
};

class Derived : public Base
{
    int y;

public:
    // default constructor
    Derived()
    {
        cout << "Derived default constructor\n";
    }
    // parameterized constructor
    Derived(int i)
    {
        y = i;
        cout << "Derived parameterized constructor\n";
    }
};

int main()
{
    Base b;
    Derived d1;
    Derived d2(10);
}