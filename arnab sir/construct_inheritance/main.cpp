#include <iostream>
using namespace std;

class groundfloor
{
public:
    groundfloor()
    {
        cout << "Ground floor is created " << endl;
    }
};

class firstfloor : public groundfloor
{
public:
    firstfloor()
    {
        cout << "First floor is created " << endl;
    }
};

int main()
{
    firstfloor f;
    //ground floor is created
    //first floor is creatad

    return 0;
}
