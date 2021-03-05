#include <bits/stdc++.h>
using namespace std;

struct employee
{
    int id;
    char designation[100];
    char branch[100];
    //no compilation error, in c++ we can store method/functions in struct
    int getID()
    {
        return id;
    }
};

int main()
{
    struct employee emp;
    emp.id = 0;
    printf("%d", emp.getID());
}