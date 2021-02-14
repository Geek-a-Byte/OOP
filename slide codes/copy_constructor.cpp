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
    char *getName()
    {
        return name;
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
    Student st1 = Student(3, "nawme"); //implicitly ->Student st1(3,"nawme")
    Student st3 = st;                  //new object=existing obj ->copy constructor called
    st = st1;                          //just an assignment operator; st is already instantiated, so when it is assigned a new value, copy constructor wont be called
    // copy constructor is called when a new object is called from an existing object as a copy of the existing object
    cout << st.getName() << endl;
    cout << "hello\n";
    func(st1);   //cc called destructor called
    func1(st1);  //no cc called no dest called
    func2(&st1); //no cc/dest called
    //cout << st.getID();
    //cout << endl;
    // cout << st1.getID();
    // cout << endl;
    cout << "finish\n";
}