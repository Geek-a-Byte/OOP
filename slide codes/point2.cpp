#include <bits/stdc++.h>
#include <math.h>
using namespace std;

class Point
{
    float x, y;

public:
    void setXY()
    {
        cin >> x;
        cin >> y;
    }

    void dist(Point p)
    {
        float X = (this->x - p.x) * (this->x - p.x);
        float Y = (this->y - p.y) * (this->y - p.y);
        float d = sqrt(X + Y);
        cout << "the dist between two points is " << d << "\n";
    }
    Point calculateMID(Point p2)
    {
        Point p3;
        p3.x = (this->x + p2.x) / 2;
        p3.y = (this->y + p2.y) / 2;
        return p3;
    }
    void showXY()
    {
        cout << x << " " << y;
    }
};

int main()
{
    Point p, p2, p3;
    p.setXY();
    p2.setXY();
    p.dist(p2);
    p3 = p.calculateMID(p2);
    p3.showXY();
}
