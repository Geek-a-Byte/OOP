#include <iostream>
using namespace std;

class base
{
protected:
    void hiddenbase()
    {
        cout << "This cant be called from main directly" << endl;
    }

public:
    void publicbase()
    {
        cout << "This can be called from main directly" << endl;
    }
};

class derived : protected base
{

protected:
    void hiddenderived()
    {
        publicbase();
    }

public:
    void publicderived()
    {
        hiddenbase();
    }
};

int main()
{
    derived d;
    d.publicderived();
    //d.hiddenderived();//protected
    //but if we make hiddenderived public we can access it
    //d.publicbase(); //as it is protected so we cant call from main
    return 0;
}
//!First, you can only change the access specifiers of base members the derived class would normally be able to access. Therefore, you can never change the access specifier of a base member from private to protected or public, because derived classes do not have access to private members of the base class.