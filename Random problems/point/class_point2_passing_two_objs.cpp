#include<iostream>
#include<cstring>
#include<stdio.h>
#include<math.h>
using namespace std;

class point
{

float x;
float y;
public:
void SetX(float g)
{
    x=g;
}
void SetY(float h)
{
    y=h;
}
void distance(point pa,point pb)
{
    float a=(pa.x-pb.x)*(pa.x-pb.x);
    float b=(pa.y-pb.y)*(pa.y-pb.y);
    float c=sqrt(a+b);
    cout<<c<<endl;

}
};

int main()
{
    point p1,p2;
    p1.SetX(2);//x
    p1.SetY(3);//y
    p2.SetX(1);//x
    p2.SetY(4);//y
    p1.distance(p1,p2);

}

