//!Base class Parameterized Constructor in Derived class Constructor
/*
//*To call base class 's parameterised constructor inside derived class' s parameterised constructo, we must mention it explicitly while declaring derived class's parameterized constructor.
*/
#include <iostream>
using namespace std;

class Base
{
    int x;

public:
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
    // parameterized constructor
    Derived(int j) : Base(j)
    {
        y = j;
        cout << "Derived Parameterized Constructor\n";
    }
};

int main()
{
    Derived d(10);
}