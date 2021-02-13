#include <iostream>
using namespace std;

class point
{
protected:
    int x, y, z = 50;

public:
    void setpoint(int a, int b)
    {
        x = a;
        y = b;
    }
    void show() { cout << z << " " << x << " " << y << endl; }
};

class point3d : public point
{              // show() - own copy ,,,, point::show()
    int mz, z; // this z is of point3d, not of point because if we print the value of z without initializing it here
               // then we will get garbage value of z

public:
    void set3d(int a, int b, int c)
    {
        setpoint(a, b);
        point::z = 60; // this z is of point // we are overriding the variable
        mz = c;
        //x=10
        //y=20
        //point::z=60
        //mz=30
    }
    void show()
    {
        //point::show();
        cout << "point::z = " << point::z << " this->z = " << this->z << endl
             << endl;

        cout << z << " " << x << " " << y << " " << mz << endl;
    }
};

int main()
{
    point3d p;
    p.show();
    p.point::show();
    p.set3d(10, 20, 30);
    p.show();
    p.point::show();

    return 0;
}

/*
o/p:
point::z = 50 this->z = 4201024

4201024 6422280 1962307565 6422400
50 6422280 1962307565
point::z = 60 this->z = 4201024

4201024 10 20 30
60 10 20
*/