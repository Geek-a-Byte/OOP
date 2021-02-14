#include <bits/stdc++.h>
using namespace std;

class op_overload
{
    int a, b, c;

public:
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

    friend void operator++(op_overload &obj);
};

void operator++(op_overload &obj)
{
    ++obj.a;
    ++obj.b;
    ++obj.c;
}
int main()
{
    op_overload ob1(1, 2, 3);

    operator++(ob1); //reference hishebe pathale thik output ashe, karon naile function er inside er change haray jay

    ob1.display();
}
