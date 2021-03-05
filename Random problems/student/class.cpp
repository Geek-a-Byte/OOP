//preprocessor directive
#include <bits/stdc++.h>
using namespace std;
class Student
{
    int id;
    string name;

public:
    void getid()
    {
        scanf("%d", &id);
    }
    void getname()
    {
        //for one line input:
        getline(cin, name);
    }
    void print()
    {
        cout << name << endl;
        cout << id << endl;
    }
};
int main()
{
    Student stu;
    stu.getid();
    cin.ignore();
    stu.getname();
    stu.print();
}
