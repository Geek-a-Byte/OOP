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

    //return-type operator ++()
    void operator++()
    {

        a++;
        b++;
        c++;
    }
};
int main()
{
    op_overload ob1(1, 2, 3);
    ob1.display();
    ++ob1; ///ob1.operator

    ob1.display();
}
