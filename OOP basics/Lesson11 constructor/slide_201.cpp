#include <bits/stdc++.h>
using namespace std;

class date
{
    int day, month, year;

public:
    date()
    {
        day = month = year = 0;
    }
    date(int d, int m, int y)
    {
        day = d;
        month = m;
        year = y;
    }
    void setDay(int d)
    {
        day = d;
    }
    void setMonth(int m)
    {
        month = m;
    }
    void setYear(int y)
    {
        year = y;
    }
    int getDay() { return day; }
    int getMonth() { return month; }
    int getYear() { return year; }
};

class Student
{
    int id;
    date dob;

public:
    Student(int i, int d, int m, int y)
    {
        id = i;
        dob = date(d, m, y);
    }
    int getID() { return id; }
    void printDob()
    {
        cout << dob.getDay() << " " << dob.getMonth() << " " << dob.getYear() << "\n";
    }
};

int main()
{
    Student st(21, 8, 8, 97);
    cout << st.getID() << " ";
    st.printDob();
}