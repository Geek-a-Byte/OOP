#include <iostream>
using namespace std;

class ground
{
public:
    ground()
    {
        cout << "Ground floor is created " << endl;
    }
};

class first : public ground
{
public:
    first()
    {
        cout << "First floor is created " << endl;
    }
};

int main()
{
    first f;
    //ground floor is created
    //first floor is creatad

    return 0;
}
