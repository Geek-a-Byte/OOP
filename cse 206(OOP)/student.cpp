//preprocessor directive
#include<iostream>
#include<cstring>//c language er string use korte
#include<stdio.h>
using namespace std;//deyai lagbe duniya venge porleo
class Student
{
    int id;//by default private
    string name;//ekbare string id and name neya jaito
    public:
    //function definition and declaration
    void getid()
    {
        scanf("%d",&id);
        cin.ignore();//id scan korar  por enter dile oita string hishbe input niye nei tai cin.ignore() diye enter ignore korbo
    }
    void getname()
    {
        //cin>>name;
        /*
        32
        nazia shehnaz joynab
        nazia
        32
        */
        getline(cin,name);//ekline e null na howa porjonto ekadhik word input nite//cin diye name input nile ektai word input nito
        /*
        32
        nazia shehnaz
        nazia shehnaz
        32
        */
    }
    void print()
    {

        cout<<name<<endl;
        cout<<id<<endl;
    }

};
int main()
{
    Student stu;//object declaration
    stu.getid();
    stu.getname();
    stu.print();
}

