#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class student
{
    char *name;
    int id;
public:
    student()
    {
        //default constructor
    }
    student(int I, char *n)
    {
        id=I;
        name=new char();
        strcpy(name,n);//n er address er char string ke copy kore rakhbe
    }
    friend void Display(student s[], int k);
};
void Display(student s[],int k)
{
    for(int i=0;i<k;i++)
    {
        cout<<s[i].id<<":"<<s[i].name<<endl;
    }
}

int main()
{
    int n,id;
    char nam[20];
    cout<<"Number of students: "<<endl;
    cin>>n;
    cout<<"Enter your id and name: "<<endl;
    student s1[n];
    for(int i=0;i<n;i++)
    {
        cin>>id;
        getchar();
        gets(nam);
        student s(id,nam);
        s1[i]= s;
    }
    Display(s1,n);
}
