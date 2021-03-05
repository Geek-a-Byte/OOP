#include<iostream>
#include<cstring>
#include<stdio.h>
#include<math.h>
using namespace std;

class point
{
public:
float x;
float y;

void SetX()
{
    cin>>x;
}
void SetY()
{
    cin>>y;
}
void distance(point p)
{
    float a=(x-p.x)*(x-p.x);
    float b=(y-p.y)*(y-p.y);
    float c=sqrt(a+b);
    cout<<"Distance:"<<c;

}
};

int main()
{
    point p1,p2;
    p1.SetX();//x
    p1.SetY();//y
    p2.SetX();
    p2.SetY();
    p1.distance(p2);
}

