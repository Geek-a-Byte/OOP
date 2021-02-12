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
//int myClass::x;
int myClass::x = 8;

int main()
{
    //myClass::x = 7; //!cannot access if x is private in the class
    //myClass::x = 7; //!can access if x is public in the class

    // !case1
    // myClass::x = 7;
    // myClass o1, o2;
    // cout << o2.getX() << endl; //7
    // cout << o1.getX() << endl; //7

    //!case2
    // myClass o3, o4;
    // myClass::x = 7;
    // cout << o3.getX() << endl; //7
    // cout << o4.getX();         //7

    //!case3
    // myClass o5, o6;
    // cout << o5.getX() << endl; //0
    // cout << o6.getX();         //0
    // myClass::x = 7;

    //!case4
    //making x private and keeping the initialization
    //it will not give error
    //it will just print 0 as value of x
    myClass o5, o6;
    cout << o5.getX() << endl; //0
    cout << o6.getX();         //0

    // //!case5
    // myClass o5, o6;
    // myClass::x = 7;            //error in this line as x is inaccessible from main if x is private in class
    // cout << o5.getX() << endl; //0
    // cout << o6.getX();         //0
}