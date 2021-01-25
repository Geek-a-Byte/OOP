#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Point
{
    float x, y;

public:
    void setX(float a)
    {
        x = a;
    }
    void setY(float b)
    {
        y = b;
    }
    void dist(float x2, float y2)
    {
        float X = (x - x2) * (x - x2);
        float Y = (y - y2) * (y - y2);
        float d = sqrt(X + Y);
        cout << "the dist between two points is " << d << "\n";
    }
};

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p;
    p.setX(x1);
    p.setY(x2);
    p.dist(x2, y2);
}
