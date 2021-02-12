#include <bits/stdc++.h>
using namespace std;

class Student
{
    int id;
    char *name;

public:
    // Student()
    // {
    //     id = 0;
    //     name = "";
    //     cout << "Default constructor\n";
    // }
    Student(int id, char *p)
    {
        this->id = id;
        name = new char[strlen(p)];
        strcpy(name, p);
        //this->name = name;
        cout << "constructing " << name << endl;
    }
    Student(const Student &obj)
    {
        id = obj.id;
        name = new char[strlen(obj.name) + 1];
        strcpy(name, obj.name);
        cout << "copy constructor calling " << name << endl;
    }
    ~Student()
    {
        cout << "destructing "
             << name << endl;
        delete[] name;
    }

    int getID()
    {
        return id;
    }
    char *getName()
    {
        return name;
    }
};
Student func(Student st) //not obj declaration but assignment stmnt
{
    Student temp(3, "temp");
    return temp;
} //destructor call hobe for st, ekhane st=st1

void func1(Student &st)
{
    cout << st.getID() << endl;
}

void func2(Student *st)
{
    cout << st->getID() << endl;
}
int main()
{
    Student st1(1, "st1"), st2(2, "st2");
    Student st3 = st1;
    st3 = func(st1);
    cout << "finish\n";
}