#include <bits/stdc++.h>
using namespace std;
void Xtest(int test)
{
    cout << "inside Xtest: " << test << endl;
    if (test > 0)
        throw test;
}

int main()
{
    cout << "start\n";
    try
    {
        cout << "inside a try block\n";
        Xtest(0);
        Xtest(1);
        Xtest(2);
    }
    catch (int i)
    {
        cout << "caught number: " << i << endl;
    }
    cout << "end";
}