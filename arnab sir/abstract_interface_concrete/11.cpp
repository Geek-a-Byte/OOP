#include <bits/stdc++.h>
using namespace std;

class base1
{
public:
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
}