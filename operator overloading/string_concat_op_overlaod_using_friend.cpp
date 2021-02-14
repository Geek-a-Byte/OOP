#include <bits/stdc++.h>
using namespace std;

class op_overload
{

    string name;

public:
    op_overload()
    {
    }
    op_overload(string s)
    {
        name = s;
    }

    void display()
    {
        cout << name << endl;
    }
    friend op_overload operator+(op_overload ob1, op_overload ob2);
};

op_overload operator+(op_overload ob1, op_overload ob2)
{
    op_overload new_ob;
    new_ob.name = ob1.name + " " + ob2.name;
    return new_ob;
}
int main()
{
    op_overload ob1("MIST"), ob2("CSE"), ob3;
    //ob3 = ob1 + ob2; or
    ob3 = operator+(ob1, ob2);
    ob3.display();
}
