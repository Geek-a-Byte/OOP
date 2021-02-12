//! reminder: static member vars cant be defined inside the class but static member function can be defined
//non static member variables or functions cannot be accessed by static member functions
#include <bits/stdc++.h>

using namespace std;
int global = 100;
class A
{
    int a;
    static int c;

public:
    static int gettt()
    {
        return c;
    }

    static int getValue()
    {
        //!case 1
        // a = 10;   //error
        // return a; //error //non static member var cant be accessed by static member function

        //!case 2
        // int b = get(); //error //non static member function cant be accessed by static member function
        // return b;

        //!case 3
        // c = 1000;//error as static member vars can only be declared inside the class but defined outside of the class
        // return c;//error

        //!case 4
        //return c; //define c outside of the class then it will work

        //!case 5

        cout << "in static function \n"
             << global << endl;
        int b = gettt(); // static function can be accessed by a static function
        return b;
    }
    void get()
    {
        a = 10;
        cout << a + c << endl; //accessing both static and non-static variable
    }
    void get2()
    {
        int d = getValue();
        cout << d << endl; // accessing static function
    }
};

int A::c = 10;

main()
{
    A a;
    cout << A::getValue() << endl;
    // A::get(); //error
    a.get();
    a.get2();
    return 0;
}