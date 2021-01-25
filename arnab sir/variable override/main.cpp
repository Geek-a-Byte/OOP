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
{ // show() - own copy ,,,, point::show()
    int mz, z = 100;

public:
    void set3d(int a, int b, int c)
    {
        setpoint(a, b);
        z = 60;
        mz = c;
    }
    void show()
    {
        //point::show();
        cout << z << " " << x << " " << y << " " << mz << endl;
    }
};

int main()
{
    point3d p;
    p.show();        //100 garbage garbage garbage
    p.point::show(); //50 garbaze garbage garbage
    p.set3d(10, 20, 30);
    p.show();        //60 10 20 30
    p.point::show(); //50 10 20

    return 0;
}
