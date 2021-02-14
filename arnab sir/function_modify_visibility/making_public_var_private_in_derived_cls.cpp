#include <iostream>
using namespace std;

class base
{
public:
    int c;
};

class derived : public base
{
private:
    base::c;
};

int main()
{
    derived d;
    //d.c; //error
    base b;
    b.c; //no error
}