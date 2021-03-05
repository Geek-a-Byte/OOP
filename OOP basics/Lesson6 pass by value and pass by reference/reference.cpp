#include <bits/stdc++.h>

using namespace std;

void f(int *n) //* is the dereferencing op
{
    *n = 100;
    cout << "value of n: " << *n << endl;
}
void f1(int &n)
{
    n = 100;
    cout << "value of n: " << n << endl;
}
int main()
{
    int i = 0;
    cout << "before func " << i << "\n";
    f(&i); //passing reference or address
    cout << "after return " << i << "\n";

    ///////////////////////////
    // cout << "before func " << i << "\n";
    // f1(i);
    // cout << "after return " << i << "\n";
}