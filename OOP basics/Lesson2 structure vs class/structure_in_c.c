#include <stdio.h>

struct employee
{
    int id;
    char designation[100];
    char branch[100];
    //!compilation error
    //! in C, we cannot define/declare functions/methods inside struct
    // int getID()
    // {
    //     return id;
    // }
};

int main()
{
    struct employee emp;
    emp.id = 0;
    printf("%d", emp.id);
}