#include <bits/stdc++.h>
using namespace std;

class base1
{
public:
    // virtual void f1()
    // {
    //     cout << "f1 is called\n";
    // }
    void f1()
    {
        cout << "f1 is called\n";
    }
};
class derived1 : public base1
{
public:
    void f1()
    {
        cout << "f1 is overridden\n";
    }
};

int main()
{
    base1 b;
    b.f1();

    derived1 c;
    c.f1();

    base1 *b1;
    b1 = &c;
    b1->f1();
    //"f1 is called" is printed even if the base pointer is pointing to a derived class object
    //this is because here early binding takes places

    // i.e the compiler matches the function call considering the type of pointer
    // and not considering the type of object which it is pointing to

    //In early binding, the compiler matches the function call
    //with the function definition which has been called during compile time.
    //It is also known as Static Binding or Compile-time Binding.

    //to print derived class's f1() we need to make f1() of base class virtual if we use base pointer
    //or we can directly take a derived class object.
}
/*
output:
f1 is called
f1 is overridden
f1 is called
*/