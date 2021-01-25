#include <iostream>
using namespace std;

class groundfloor
{
public:
    //default const
    groundfloor()
    {
        cout << "Ground floor is created " << endl;
    }
    //para const
    groundfloor(int r)
    {
        cout << "Ground floor is created with " << r << " rooms" << endl;
    }
    //dest
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

int main()
{
    firstfloor f(3, 1);
    return 0;
}
