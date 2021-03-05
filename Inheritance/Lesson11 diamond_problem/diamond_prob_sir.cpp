// grandpa class - person (name,age)
// 2 children of grandpa - a) student (roll)  b) faculty (rank)
// child of student and faculty (grandchild of person) - l2student (marks)
#include <bits/stdc++.h>
using namespace std;
class person
{
public:
    string name;
    int age;
    person(string str, int age)
    {
        name = str;
        this->age = age;
        //cout<<name<<endl;
    }
    void show_person()
    {
        cout << name << " " << age << endl;
    }
};
class student : public person
{
public:
    int roll;
    student(string str, int age, int r) : person(str, age)
    {
        roll = r;
        //cout<<roll<<endl;
    }
    void show_student()
    {
        show_person();
        cout << roll << endl;
    }
};

class faculty : public person
{
public:
    string rank;
    faculty(string str, int age, string rank) : person(str, age)
    {
        this->rank = rank;
        // cout<<rank<<endl;
    }
    void show_faculty()
    {
        cout << rank << endl;
    }
};

class l2student : public faculty, public student
{
public:
    int marks;
    l2student(string str, int age, string rank, int roll, int marks) : faculty(str, age, rank), student(str, age, roll)
    {
        this->marks = marks;
    }
    void show_marks()
    {
        show_student();
        show_faculty();
        cout << marks << endl;
    }
};

int main()
{
    l2student l2("anik", 22, "colonel", 1001, 85);
    l2.show_marks();
    return 0;
}
