#include <iostream>
using namespace std;

class groundfloor
{
public:
    groundfloor()
    {
        cout << "Ground floor is created " << endl;
    }
    groundfloor(int g)
    {
        cout << "Ground floor is created with " << g << " rooms" << endl;
    }
    ~groundfloor()
    {
        cout << "Ground floor is destroyed " << endl;
    }
};

class firstfloor : public groundfloor
{
public:
    firstfloor()
    {
        cout << "First floor is created " << endl;
    }
    firstfloor(int f, int g) : groundfloor(g)
    {
        cout << "First floor is created with " << f << " rooms" << endl;
    }

    ~firstfloor()
    {
        cout << "First floor is destroyed " << endl;
    }
};

class secondfloor : public firstfloor
{
public:
    secondfloor()
    {
        cout << "second floor is created " << endl;
    }
    secondfloor(int s, int f, int g) : firstfloor(f, g)
    {
        cout << "Second floor is created with " << s << " rooms" << endl;
    }
    ~secondfloor()
    {
        cout << "Second floor is destroyed " << endl;
    }
};

int main()
{
    secondfloor f(3, 1, 5);
    return 0;
}
/*
o/p:
Ground floor is created with 5 rooms
First floor is created with 1 rooms
Second floor is created with 3 rooms
Second floor is destroyed 
First floor is destroyed 
Ground floor is destroyed 
*/