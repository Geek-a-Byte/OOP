#include <bits/stdc++.h>
using namespace std;
double divide(double a,
              double b)
{
    if (b != 0)
    {
        double result = a / b;
        return result;
    }
    else
    {
        throw "Divide by zero ";
    }
}
main()
{
    double a, b, c;
    cin >> a >> b;
    try
    {
        c = divide(a, b);
        cout << c;
    }
    catch (const char *message)
    {
        //const na dile error
        cout << "Exception : ";
        puts(message);
    }
}