#include <bits/stdc++.h>
using namespace std;
class teacher; //prototyping na korle prob hoy

class student
{
    int dept;

public:
    void setDept(int d)
    {
        dept = d;
    }
    bool sameDept(student st)
    {
        if (dept == st.dept)
        {
            return true;
        }
        else
            return false;
    }
    bool TsameDept(teacher t);
};
class teacher
{
    int dept;

public:
    void setDept(int d)
    {
        dept = d;
    }

    friend bool student::TsameDept(teacher t);
};

bool student::TsameDept(teacher t)
{
    if (dept == t.dept)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    student st1;
    teacher t1;
    st1.setDept(5);
    t1.setDept(6);
    if (st1.TsameDept(t1) == true)
    {
        cout << "same\n";
    }
    else
    {
        cout << "not same\n";
    }
}