#include <bits/stdc++.h>
using namespace std;

void f(int *n)
{
    *n = 100;
    cout << *n << endl;
}
void f1(int &n)
{
    n = 200;
    cout << n << endl;
}

int main()
{
    int i;
    f(&i);

    cout << i << endl;
    f1(i);
    cout << i << endl;
}