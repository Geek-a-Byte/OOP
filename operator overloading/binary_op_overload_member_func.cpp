#include <bits/stdc++.h>
using namespace std;

class op_overload
{
    int a, b, c;

public:
    op_overload()
    {
    }
    op_overload(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "a : " << a << " b: " << b << " c: " << c << endl;
    }

    op_overload operator+(op_overload ob)
    {
        //cout << a << b << c;
        op_overload new_ob;
        new_ob.a = a + ob.a;
        new_ob.b = b + ob.b;
        new_ob.c = c + ob.c;

        return new_ob;
    }
};
int main()
{
    op_overload ob1(1, 2, 3), ob2(5, 6, 7), ob3;

    ///ob1.display();
    //++ob1;///ob1.operator

    //ob1.display();

    ob3 = ob1.operator+(ob2); //ob1+ob2

    ob3.display();
}
