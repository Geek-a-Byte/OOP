#include <bits/stdc++.h>
using namespace std;

class Student
{
    int id;
    char *name;

public:
    Student()
    {
        id = 0;
        name = "";
        cout << "Default constructor\n";
    }
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
};
void func(Student st) //not obj declaration but assignment stmnt
{
    cout << st.getID() << endl;
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
    Student st(2, "nazia"), st2;       //explicitly
    Student st1 = Student(3, "nawme"); //implicitly
    func(st1);                         //desructor called
    func1(st1);                        //no dest called
    func2(&st1);                       //no dest called
    //cout << st.getID();
    //cout << endl;
    // cout << st1.getID();
    // cout << endl;
    cout << "finish\n";
}