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
    friend bool TsameDept(student st, teacher t);
};
class teacher
{
    int dept;

public:
    void setDept(int d)
    {
        dept = d;
    }

    friend bool TsameDept(student st, teacher t);
};

bool TsameDept(student st, teacher t)
{
    if (st.dept == t.dept)
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
    if (TsameDept(st1, t1) == true)
    {
        cout << "same\n";
    }
    else
    {
        cout << "not same\n";
    }
}