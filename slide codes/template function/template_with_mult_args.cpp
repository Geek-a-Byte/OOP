#include <bits/stdc++.h>
using namespace std;
template <class T1, class T2>
void copy(T1 a[], T2 b[], int n)
{ //two arguments template
    for (int i = 0; i < n; i++)
        a[i] = b[i];
}
template <class T1>
void print(T1 a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
}
main()
{
    char c[50] = {'a', 'b', 'd', 'e', 'f'};
    print(c, 5);
    int i[50] = {10, 20, 30, 40, 50};
    float f[50] = {1.1, 2.2, 3.3, 4.4, 5.5};
    copy(i, f, 5); // ok, but loss of data
    print(i, 5);
    copy(c, f, 5); // full loss of data
    print(c, 5);
    copy(f, i, 5); // ok, int to float
    print(f, 5);
    copy(f, c, 5); //ok, char to float
    print(f, 5);
}