#include <iostream>
#include <new>
using namespace std;
int main()
{
    int *p;
    try
    {
        p = new int[100000000];
    }
    catch (bad_alloc xa)
    {
        cout << "allocation Failure";
    }
    delete[] p;
}
