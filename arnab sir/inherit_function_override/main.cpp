#include <iostream>
using namespace std;

class point
{
protected:
    int x, y;

public:
    void setpoint(int a, int b)
    {
        x = a;
        y = b;
    }
    void show() { cout << x << " " << y << endl; }
};

class point3d : public point
{ // show() - own copy ,,,, point::show()
    int z;

public:
    void set3d(int a, int b, int c)
    {
        setpoint(a, b);
        z = c;
    }
    void show()
    {
        point::show();
        cout << x << " " << y << " " << z << endl;
    }
};

int main()
{
    point3d p;
    p.set3d(10, 20, 30);
    p.point::show();
    p.show();
    return 0;
}
