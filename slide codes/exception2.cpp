
#include <bits/stdc++.h>
using namespace std;
class MyException
{
    char message[30];

public:
    MyException(char *m)
    {
        strcpy(message, m);
    }
    char *getMessage() { return message; }
};
double divide(double a, double b)
{
    if (b != 0)
    {
        double result = a / b;
        return result;
    }
    else
    {
        MyException Ex("Divide By Zero");
        throw Ex;
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
    catch (MyException e)
    {
        cout << "Code : ";
        cout << e.getMessage();
    }
}