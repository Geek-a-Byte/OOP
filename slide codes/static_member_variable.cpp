#include <bits/stdc++.h>

using namespace std;
class myClass
{
    static int x;

public:
    void setX(int n)
    {
        x = n;
    }
    int getX()
    {
        return x;
    }
};

//!defining the static var outside the class
//! or initialization outside the class
int myClass::x;
// int myClass::x = 0;

int main()
{
    // myClass o1, o2;
    // o1.setX(7);
    // cout << o2.getX() << endl; //7
    // cout << o1.getX();         //7

    // myClass o2, o1;
    // cout << o2.getX() << endl; // 0
    // o1.setX(7);
    // cout << o1.getX();         //7

    myClass o2, o1;
    o1.setX(7);
    cout << o2.getX() << endl; //7
    cout << o1.getX();         //7
}