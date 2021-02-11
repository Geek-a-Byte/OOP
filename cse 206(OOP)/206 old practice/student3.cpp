#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

class student{
        public:
            int Id;
            string name;
            float cgpa;
            void display()
            {
                  cout<<Id<<" "<<name<<" "<<cgpa<<endl;
            }

};

int main()
{
    //problem 1:
    /*student stu1,stu2;
    stu1.Id=10;
    stu1.name="shiri";
    stu1.cgpa=4.00;
    stu2.Id=11;
    stu2.name="abed";
    stu2.cgpa=5.00;
    */
    /*
    //problem 2:
    cin>>stu1.Id;
    cin.ignore();
    getline(cin,stu1.name);
    cin>>stu1.cgpa;
    cin>>stu2.Id;
    cin.ignore();
    getline(cin,stu2.name);
    cin>>stu2.cgpa;*/

    //to take input of a lot of students in loop
    student stu[3];

    for(int i=0;i<3;i++)
    {
    cin>>stu[i].Id;
    cin.ignore();
    getline(cin,stu[i].name);
    cin>>stu[i].cgpa;

    }
    for(int i=0;i<3;i++)
    {
        stu[i].display();
    }

}

