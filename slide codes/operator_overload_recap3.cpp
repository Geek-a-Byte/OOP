#include <bits/stdc++.h>
using namespace std;

class op_overload
{
    int a, b, c;
    string name;

public:
    op_overload()
    {
        //!default constructor is important , without it error
    }
    op_overload(string s)
    {
        name = s;
    }

    void display()
    {
        cout << name << endl;
    }

    op_overload operator+(op_overload ob)
    {
        op_overload new_ob;
        new_ob.name = name + " " + ob.name;

        return new_ob;
    }
};
int main()
{
    op_overload ob1("MIST"), ob2("CSE"), ob3;

    ///ob1.display();
    //++ob1;///ob1.operator

    //ob1.display();
    ob3 = ob1 + ob2; ///ob3=ob1.operator(ob2)
    ob3.display();
}
