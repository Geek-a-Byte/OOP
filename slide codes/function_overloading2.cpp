//! error in code
#include <bits/stdc++.h>
using namespace std;
int abs(int n)
{
    return (n < 0) ? -n : n;
}
long abs(long n)
{
    return (n < 0) ? -n : n;
}
float abs(float n)
{
    return (n < 0) ? -n : n;
}
// template <class T>T function_name(T n){ }
//  template <typename T>T function_name(T n){ }
template <class T>
T function_name(T n) {}
main()
{
    int i = -3;
    cout << abs(i);
    long l = -7;
    cout << abs(l);
    float f = -2.0;
    cout << abs(f);
}