//! error in code
#include <bits/stdc++.h>
using namespace std;

int abs(int n)
{
    return (n < 0) ? -n : n; //-(-7)=7
}
double abs(double n)
{
    return (n < 0) ? -n : n;
}
// float abs(float n)
// {
//     return (n < 0) ? -n : n;
// }
// template <class T>T function_name(T n){ }
// template <typename T>T function_name(T n){ }
//template <class T>
//T function_name(T n) {}
int sum(int a, int b)
{
    int result = a + b;
    return result;
}
double sum(double a, double b)
{
    double result = a + b;
    return result;
}
main()
{
    int i = -3;
    cout << abs(i) << endl;
    long l = -7.00;
    cout << abs(l) << endl;

    // float f = -2.0;
    // cout << abs(f);
    cout << sum(3.400000, 5.60000) << endl;

    cout << sum(3, 7);
}