#include <bits/stdc++.h>

using namespace std;
template <class X>
void func(X n)
{
    cout << "Inside Generic Function" << endl;
}
int func(int n)
{
    cout << "Inside Specific Function : " << n << endl;
}
main()
{
    int i = 10;
    func(i);
    double d = 5.5;
    func(d);
}
