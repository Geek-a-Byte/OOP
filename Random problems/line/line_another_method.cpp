#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;

class Line{

int no_of_points;
double *x;
double *y;

public:
Line(double a[],double b[],int n)
{
    no_of_points=n;
    x=new double [n];
    y=new double [n];
    for(int i=0;i<n;i++)
    {
      x[i]=a[i];
      y[i]=b[i];
    }

}
Line(Line l, int a1, double a[],double b[])
{
    no_of_points=l.no_of_points+ a1;
    x=new double [no_of_points];
    y=new double [no_of_points];
    for(int i=0;i<l.no_of_points;i++)
    {
        x[i]=l.x[i];
        y[i]=l.y[i];
    }
    //add extra points to the array
    int j=0;
    for(int i=l.no_of_points;i<no_of_points,j<a1;i++)
    {
        x[i]=a[j];
        y[i]=b[j];
        j++;
    }

}
~Line(){
delete []x;
delete []y;
}

    double calculate_length()
    {
        double sum=0;
        for(int i=0;i<no_of_points-1;i++)
        {
          sum=sum+sqrt((x[i]-x[i+1])*(x[i]-x[i+1])+(y[i]-y[i+1])*(y[i]-y[i+1]));
        }
        return sum;

    }

};


int main()
{
    int n;
    cout<<"enter the number of co ordinates for the first line:"<<endl;
    cin>>n;

    cout<<"enter the co ordinates of x and y:"<<endl;
    double x,y;
    double *arr_x,*arr_y;
    arr_x=(double*)malloc(n*(sizeof(double)));
    arr_y=(double*)malloc(n*(sizeof(double)));

    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>y;
        arr_x[i]=x;
        arr_y[i]=y;
    }

    Line l1(arr_x,arr_y,n);
    double d1=l1.calculate_length();
    cout<<fixed<<setprecision(2)<<"The length of the first line is "<<d1<<endl;


    cout<<"enter the number of co ordinates for the second line:"<<endl;
    cin>>n;

    cout<<"enter the co ordinates of x and y:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        cin>>y;
        arr_x[i]=x;
        arr_y[i]=y;
    }


    Line l2(arr_x,arr_y,n);
    double d2=l2.calculate_length();
    cout<<fixed<<setprecision(2)<<"The length of the second line is "<<d2<<endl;

    if(d1>d2)
        cout<<"Line 1> Line 2"<<endl;
    else
        cout<<"Line 2> Line 1"<<endl;



    int add1;

    cout<<"Add more point for line 1:"<<endl;
    cin>>add1;


    double ex_x[add1];
    double ex_y[add1];


    for(int i=0;i<add1;i++)
    {
        cout<<"Enter co-ordinates:"<<endl;
        cin>>x>>y;
        ex_x[i]=x;
        ex_y[i]=y;

    }


    Line l3(l1,add1,ex_x,ex_y);
    double d3=l3.calculate_length();
    cout<<fixed<<setprecision(2)<<"updated length of the first line is: "<<d3<<endl;

    int add2;

    cout<<"Add more point for line 2:"<<endl;
    cin>>add2;

    double ex_x2[add2];
    double ex_y2[add2];

    for(int i=0;i<add2;i++)
    {
        cout<<"Enter co-ordinates:"<<endl;
        cin>>x>>y;
        ex_x2[i]=x;
        ex_y2[i]=y;

    }


    Line l4(l2,add2,ex_x2,ex_y2);
    double d4=l4.calculate_length();
    cout<<fixed<<setprecision(2)<<"updated length of the second line is: "<<d4<<endl;

      if(d3>d4)
        cout<<"Line 1> Line 2"<<endl;
    else
        cout<<"Line 2> Line 1"<<endl;


}
//int *x=new int(5);->ekta integer er memory allocate korbo jekhane value hobe 5
//int *p=new int[5];->5 ta int er array
//line obj(ob1)
