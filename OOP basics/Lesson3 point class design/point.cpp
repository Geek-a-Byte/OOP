#include <bits/stdc++.h>
#include <math.h>
using namespace std;

//this is class declaration,class declaration is not a physical entity.
//this is just a logical representation of point
//so does not occupy memory
class Point
{
    float x1, y1;

public:
    void setX(float a)
    {
        x1 = a;
    }
    void setY(float b)
    {
        y1 = b;
    }
    void dist(float x2, float y2)
    {
        float X = (x1 - x2) * (x1 - x2);
        float Y = (y1 - y2) * (y1 - y2);
        float d = sqrt(X + Y);
        cout << "the dist between two points is " << d << "\n";
    }
};

int main()
{
    float x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    Point p; //creating objects of a class means creating a physical entity for that class.so creating object occupies memory
    p.setX(x1);
    p.setY(y1);
    p.dist(x2, y2);
}
