#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int Id;
    string name;
    float cgpa;
    void display()
    {
        cout << Id << " " << name << " " << cgpa << endl;
    }
};

int main()
{
    student stu[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> stu[i].Id;
        cin.ignore();
        getline(cin, stu[i].name);
        cin >> stu[i].cgpa;
    }
    for (int i = 0; i < 3; i++)
    {
        stu[i].display();
    }
}
