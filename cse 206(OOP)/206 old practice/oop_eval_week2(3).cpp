#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class Time{
int hr;
int minutes;
int sec;
public:
void setTime(int h,int m,int s)
{
    hr=h;
    minutes=m;
    sec=s;
}
void getTime()
{
    cout<<"The Time is :"<<hr<<":"<<minutes<<":"<<sec<<endl;
}

void timeDiff(Time t1,Time t2)
{
    hr=t1.hr-t2.hr;
    minutes=t1.minutes-t2.minutes;
    sec=t1.sec-t2.sec;

    cout<<"The time difference between two local times is->"<<hr<<":"<<minutes<<":"<<sec<<endl;

}
};

int main()
{

    Time t1,t2,t3;
    int h,m,s;
    cout<<"enter the first local time:"<<endl;
    cout<<"enter the hour:"<<endl;
    cin>>h;
    cout<<"enter the min:"<<endl;
    cin>>m;
    cout<<"enter the second:"<<endl;
    cin>>s;
    t1.setTime(h,m,s);
    t1.getTime();
    cout<<"enter the second local time:"<<endl;
    cout<<"enter the hour:"<<endl;
    cin>>h;
    cout<<"enter the min:"<<endl;
    cin>>m;
    cout<<"enter the second:"<<endl;
    cin>>s;
    t2.setTime(h,m,s);
    t2.getTime();
    t3.timeDiff(t1,t2);


}