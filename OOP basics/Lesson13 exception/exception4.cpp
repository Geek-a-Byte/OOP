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
        //rethrow the exception "hello" by writing only "throw"
        //because when we "throw" from a catch block it means we are rethrowing the
        //exception caught by this catch block
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