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
void distance(int a,int b)
{
    float d=(x-a)*(x-a);
    float e=(y-b)*(y-b);
    float c=sqrt(d+e);
    cout<<"Distance:"<<c;

}
};

int main()
{
    point p1;
    p1.SetX();//x
    p1.SetY();//y
    p1.distance(3,4);
}

