#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
class Student
{
    int id;
    string name;
    public:
    void getid()
    {
        scanf("%d",&id);
    }
    void getname()
    {
        getline(cin,name);
    }
    void print()
    {

        cout<<name<<endl;
        cout<<id<<endl;
    }

};
int main()
{
    Student stu;
    stu.getname();//enter ke ignore korte pari nai dekhe
    stu.getid();
    stu.print();
}
