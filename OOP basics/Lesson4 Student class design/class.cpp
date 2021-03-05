//learn how to define member functions outside of the class
#include <bits/stdc++.h>
using namespace std;

class Student
{
    int id;
    string name;

public:
    void setID(int);
    void setName(string);
    int getID();
    string getName();
    void display()
    {
        cout << id << name;
    }
};

void Student::setID(int i)
{
    id = i;
}

void Student::setName(string n)
{
    name = n;
}

int Student::getID()
{
    return id;
}

string Student::getName()
{
    return name;
}

int main()
{
    Student st;
    int id;
    string name;
    cin >> id;
    cin.ignore();
    //cin >> name;
    getline(cin, name);
    st.setID(id);
    st.setName(name);
    st.display();
    //cout << st.getID() << " " << st.getName();
}