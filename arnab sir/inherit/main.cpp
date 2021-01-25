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
    //will inherit the protected variable x & y which will remain protected here
    //will inherit the public function which will remain public here
    //protected members can be access by within the class
    int z;

public:
    void setZ(int a, int b, int c)
    {
        setpoint(a, b);
        z = c;
    }
    void show()
    {
        cout << x << "," << y << "," << z << endl;
    }
};

int main()
{
    Point3D p2;
    p2.setZ(5, 6, 7);
    p2.show();
    return 0;
}
