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
    void show()
    {
        cout << "p.point::show()->\n";
        cout << x << " " << y << endl;
    }
};

class point3d : public point
{
    // show() - inherited from base can be accessed by ,,,, point::show()
    //now we override the inherited function show()
    int z;

public:
    void set3d(int a, int b, int c)
    {
        setpoint(a, b);
        z = c;
    }
    void show()
    {
        cout << "p.show()->\n";
        //point::show();
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
