
#include<iostream>
using namespace std;

class Distance
{
    
    int feet;
    float inch;
   
    public:
    void getDist()
    { 
        cout<<"\nEnter feet: ";
        cin>>feet;
        cout<<"\nEnter inches: ";
        cin>>inch;
        
   }
    void add_dist(Distance D1,Distance D2)
    {
       
       feet=D1.feet+D2.feet;
       inch= D1.inch+D2.inch;

       if((int)inch%12>=0)
       {
        feet=feet+(float)((int)inch/12);
        inch=(int)inch%12;
        return ;
       }
    
     return;
       
    }   
    void showDist()
    {
        cout<<feet<<"\'-"<<inch<<"''";
    }
};

int main()
{
    //add lengths d2,d3
    Distance d1,d2,d3;
    d1.getDist();
    d2.getDist(); 
    d3.add_dist(d1,d2);
    d3.showDist();
}
