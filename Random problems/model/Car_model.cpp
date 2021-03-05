#include <bits/stdc++.h>
using namespace std;

class Model
{
    string Model_name;
    int year;
    string color;

public:
    void setModelName(string name)
    {
        Model_name = name;
    }
    void setYear(int y)
    {
        year = y;
    }
    void setColor(string col)
    {
        color = col;
    }

    void getYear()
    {
        cout << year << endl;
    }
    void getColor()
    {
        cout << color << endl;
    }
    void sameCar(Model m1)
    {
        if (Model_name == m1.Model_name && color == m1.color && year == m1.year)
            cout << "same car" << endl;
        else
            cout << "Not the same car" << endl;
    }
};