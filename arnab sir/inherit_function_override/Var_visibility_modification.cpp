#include <iostream>
using namespace std;

class Point
{
protected:
    int x, y;

public:
    void setpoint(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void show()
    {
        cout << x << "," << y << endl;
    }
};

class Point3D : public Point
{
    //x ->protected
    //y ->protected
    //setpoint() ->public
    //show() ->public
    //protected members can be accessed by within this class
    int z;

public:
    void setPoint3D(int a, int b, int c)
    {
        //setpoint(a, b);
        x = a;
        y = b;
        z = c;
    }
    void show() //...inherited function override
    {
        cout << x << "," << y << "," << z << endl;
    }
};

int main()
{
    Point3D p2;
    p2.setPoint3D(5, 6, 7);
    p2.Point::show();
    p2.show();
    return 0;
}
