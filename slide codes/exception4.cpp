#include <bits/stdc++.h>
using namespace std;

void Xhandler()
{
    try
    {
        throw "hello";
    }
    catch (const char *c)
    {
        cout << "caught char* inside xhandler\n ";
        throw;
    }
}

int main()
{
    cout << "start\n";
    try
    {
        Xhandler();
    }
    catch (const char *c)
    {
        cout << "caught char* inside main\n";
    }
    cout << "end";
}