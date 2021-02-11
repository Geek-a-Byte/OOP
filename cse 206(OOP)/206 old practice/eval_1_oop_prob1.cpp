#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;

namespace BusSpace{
float TravelTime(float n)
{
  float TrafficTime=50.00/60.00;
  return float(365/n)+TrafficTime;
}
}
namespace TrainSpace{
float TravelTime(float n)
{
    return 365/n;
}
}

int main()
{

    float vel_of_bus,vel_of_train;
    cout<<"enter the velocity of the bus:"<<endl;
    cin>>vel_of_bus;
    cout<<"enter the velocity of the train:"<<endl;
    cin>>vel_of_train;

    float b=BusSpace::TravelTime(vel_of_bus);
    float b_in_minutes=b*60;
    float t=TrainSpace::TravelTime(vel_of_train);
    float t_in_minutes=t*60;
    printf("Time taken by bus=%0.2f hr or %0.2f minutes\n",b,b_in_minutes);
    printf("Time taken by train=%0.2f hr or %0.2f minutes\n",t,t_in_minutes);

    //cout<<"Time taken by bus="<<" "<<b<<" "<<"or"<<" "<<b_in_minutes<<endl;
    //cout<<"Time taken by train="<<" "<<t<<" "<<"or"<<" "<<t_in_minutes<<endl;
    if(b>t)
    {
        cout<<"Train"<<endl;
    }
    else
    {
        cout<<"Bus"<<endl;
    }

}
