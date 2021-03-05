#include<bits/stdc++.h>
#include<math.h>
#include<iomanip>
using namespace std;

class PointY;
class PointX
{
   int X1,X2;
   public: 
   void SetX(float x1,float x2)
   {
      X1=x1;
      X2=x2;
   }
   friend void distance(PointX p1,PointY p2);
};

class PointY
{
int Y1,Y2;
public: 
   void SetY(float y1,float y2)
   {
      Y1=y1;
      Y2=y2;
   }
   friend void distance(PointX p1,PointY p2);
};

void distance(PointX p1,PointY p2)
{
   float d=sqrt((p1.X1-p1.X2)*(p1.X1-p1.X2)+(p2.Y1-p2.Y2)*(p2.Y1-p2.Y2));
   cout<<fixed<<setprecision(2)<<d<<endl;
}
int main()
{
    PointX p1;
    PointY p2;
    float x1,x2,y1,y2;
    cout<<"Enter the two values for two different x's : "<<endl;
    cin>>x1>>x2;
    cout<<"Enter the two values for two different y's : "<<endl;
    cin>>y1>>y2;
    p1.SetX(x1,x2);
    p2.SetY(y1,y2);
    distance(p1,p2);

    
}