// parent class - person
// child classes - student, l2student
#include <iostream>
using namespace std;
class person
{
public:
    string name;
    person(string str)
    {
        name = str;
        cout << name << endl;
    }
    void show_name()
    {
        cout << name << endl;
    }
};
class student
{
public:
    int roll;
    student(int r)
    {
        roll = r;
        cout << roll << endl;
    }
    void show_roll()
    {
        cout << roll << endl;
    }
};
class l2student : public person, public student //!this sequence matters
{
public:
    int marks;
    l2student(string str, int roll, int marks) : student(roll), person(str)
    {
        this->marks = marks;
    }
    void show_marks()
    {
        cout << name << " " << roll << " " << marks << endl;
    }
};

int main()
{
    l2student l2("anik", 1001, 85);
    l2.show_marks();
    return 0;
}
