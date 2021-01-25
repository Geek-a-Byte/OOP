#include <iostream>
using namespace std;

class groundfloor
{
public:
    groundfloor()
    {
        cout << "Ground floor is created " << endl;
    }
    groundfloor(int r)
    {
        cout << "Ground floor is created with " << r << " rooms" << endl;
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
    firstfloor(int r, int g) : groundfloor(g)
    {
        cout << "First floor is created with " << r << " rooms" << endl;
    }

    ~firstfloor()
    {
        cout << "First floor is destroyed " << endl;
    }
};

class secondfloor : public firstfloor
{
public:
    secondfloor(int a, int b, int c) : firstfloor(b, c)
    {
        cout << "Second floor is created with " << a << " rooms" << endl;
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
