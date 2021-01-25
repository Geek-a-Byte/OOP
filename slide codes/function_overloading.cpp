//****

#include <bits/stdc++.h>
using namespace std;
int fun(int a, int b) { return a + b; }
float fun(float x, float y, float z)
{
    int d = x - y;
    return d;
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}
float sum(float a, float b, float c)
{
    float result = a + b;
    return result;
}
int main()
{
    //function overloading is possible when number of args are diff, types of parameters are diff,
    int sumInt = sum(5, 6);
    int funInt = fun(5, 6);
    float sumFloat = sum(4.5, 6.0, 7.0);
    float funFloat = fun(4.5, 6.0, 7.0);

    cout << "Summation of the two integer numbers : " << sumInt << endl;
    cout << "Summation of the two float numbers : " << sumFloat << endl;
}
