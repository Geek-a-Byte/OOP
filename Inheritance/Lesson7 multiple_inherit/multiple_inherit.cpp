// parent classes - person,student
// child class - l2student
#include <bits/stdc++.h>
using namespace std;
class person
{
protected:
public:
    string name;
    person()
    {
        cout << "person class dc\n";
    }
    person(string str)
    {
        name = str;
        cout << name << endl;
    }
    void show_name()
    {
        cout << name << endl;
    }
    ~person()
    {
        cout << "person dest\n";
    }
};
class student
{
public:
    int roll;
    student()
    {
        cout << "student class dc\n";
    }
    student(int r)
    {
        roll = r;
        cout << roll << endl;
    }
    void show_roll()
    {
        cout << roll << endl;
    }
    ~student()
    {
        cout << "student dest\n";
    }
};
class l2student : public student, person //!this sequence matters very importantly
{
public:
    int marks;
    l2student()
    {
        cout << "l2student dc\n";
    }
    l2student(string str, int roll, int marks) : student(roll), person(str) //!this seq doesn't matter
    {
        this->marks = marks;
    }
    void show_marks()
    {
        cout << name << " " << roll << " " << marks << endl;
    }
    ~l2student()
    {
        cout << "l2student dest\n";
    }
};

int main()
{
    l2student l1;
    l2student l2("anik", 1001, 85);
    l2.show_marks();
    return 0;
}

/*
33 line : public person, student 
37 line : student(roll), person(str)
o/p:
anik
1001
anik 1001 85

33 line : public person, student 
37 line : person(str), student(roll)
o/p:
anik
1001
anik 1001 85

33 line : public student, person  
37 line : person(str), student(roll)
1001
anik
anik 1001 85

33 line : public student, person  
37 line : student(roll), person(str)
1001
anik
anik 1001 85

73 line : l2student l1
33 line : public student, person  
37 line : student(roll), person(str)
o/p:
student class dc
person class dc
l2student dc
1001
anik
anik 1001 85
l2student dest
person dest
student dest
l2student dest
person dest
student dest


33 line: [protected]/[private]

o/p:
student class dc
person class dc
l2student dc
1001
anik
anik 1001 85
l2student dest
person dest
student dest
l2student dest
person dest
student dest
*/
