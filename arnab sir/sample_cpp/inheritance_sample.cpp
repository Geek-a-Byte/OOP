#include <iostream>
using namespace std;
class ground
{
public:
    //default constructor
    ground()
    {
        cout << "ground floor" << endl;
    }
    //parameterized constructor
    ground(int g)
    {
        cout << "ground floor is created with " << g << " rooms" << endl;
    }
    //destructor
    ~ground()
    {
        cout << "ground floor destroyed " << endl;
    }
};

class first : public ground
{
public:
    first()
    {
        cout << "first floor" << endl;
    }
    first(int r, int g) : ground(g)
    {
        cout << "first floor is created with " << r << " rooms" << endl;
    }
    ~first()
    {
        cout << "first floor destroyed " << endl;
    }
};

int main()
{
    first f(3, 1);
    //ground floor is created with 1 rooms
    //first floor is created with 3 rooms
    //then reverse order e destructor call
    //first floor destroyed
    //ground floor destroyed
}
