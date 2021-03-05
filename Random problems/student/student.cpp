#include <bits/stdc++.h>
using namespace std;
class student
{
    string name;
    int id;

public:
    student()
    {
        //default constructor
    }
    student(int I, string n)
    {
        id = I;
        name = n;
    }
    friend void Display(student s[], int k);
};
void Display(student s[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << s[i].id << ":" << s[i].name << endl;
    }
}

int main()
{
    int n, id;
    string nam;
    cout << "Number of students: " << endl;
    cin >> n;
    cout << "Enter your id and name: " << endl;
    student s1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> id;
        getchar();
        getline(cin, nam);
        student s(id, nam);
        s1[i] = s;
    }
    Display(s1, n);
}
