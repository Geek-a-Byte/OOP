#include <bits/stdc++.h>
using namespace std;

class Student
{
    string name;
    int id;

public:
    void setValues(string n, int i)
    {
        name = n;
        id = i;
    }
    void showValues()
    {
        cout << "Name is : " << name << endl;
        cout << "Id is : " << id << endl;
    }
};

int main()
{
    Student ob1[20], ob2;
    Student *p, *p1;
    p = &ob2;
    p->setValues("Nazia", 32);
    p->showValues();
    p1 = &ob1[0];
    //ob1.setValues("Mila", 21);
    //ob1.showValues();
    //ob2 = ob1;
    //ob2.showValues();
    for (int i = 0; i < 3; i++)
    {
        int n;
        string name;
        cin >> n;
        cin.ignore();
        cin >> name;

        //ob1[i].setValues(name, n);
        p1->setValues(name, n);
        p1++;
    }
    p1 = &ob1[0];
    for (int i = 0; i < 3; i++)
    {
        p1->showValues();
        p1++;
    }
}