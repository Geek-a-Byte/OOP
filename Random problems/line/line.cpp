#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<cstdio>
#include<math.h>

using namespace std;

class Line{
int no_of_points;
double *a_x;
double *a_y;

public:
    Line(double arr_x[],double arr_y[],int n)
    {
        no_of_points=n;
        a_x=new double[n];
        a_y=new double[n];
        for(int i=0;i<n;i++)
        {
            a_x[i]=arr_x[i];
            a_y[i]=arr_y[i];
        }
    }

     ~Line(){
       delete []a_x;
       delete []a_y;
       }
    double calculate_length()
    {
        double dist=0;
        for(int i=0;i<no_of_points-1;i++)
        {
            dist=dist+sqrt(((a_x[i]-a_x[i+1])*(a_x[i]-a_x[i+1]))+((a_y[i]-a_y[i+1])*(a_y[i]-a_y[i+1])));
        }
        return dist;
    }

};

int main()
{
    //input for first line 
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

    //input for second line
    int n2;
    cout<<"enter the number of co ordinates for the second line:"<<endl;
    cin>>n2;

    cout<<"enter the co ordinates of x and y:"<<endl;
    double *arr2_x,*arr2_y;
    arr2_x=(double*)malloc(n*(sizeof(double)));
    arr2_y=(double*)malloc(n*(sizeof(double)));

    for(int i=0;i<n2;i++)
    {
        cin>>x;
        cin>>y;
        arr2_x[i]=x;
        arr2_y[i]=y;
    }


    Line l2(arr2_x,arr2_y,n2);
    double d2=l2.calculate_length();
    cout<<fixed<<setprecision(2)<<"The length of the second line is "<<d2<<endl;

    if(d1>d2)
        cout<<"Line 1> Line 2"<<endl;
    else
        cout<<"Line 2> Line 1"<<endl;
    
    //adding points to line 1
    cout<<"add points in line 1:"<<endl;

    int add1;
    cin>>add1;

    arr_x=(double*)realloc(arr_x,(n+add1)*(sizeof(double)));
    arr_y=(double*)realloc(arr_y,(n+add1)*(sizeof(double)));

    for(int i=n;i<n+add1;i++)
    {
        cin>>x>>y;
        arr_x[i]=x;
        arr_y[i]=y;
    }

    Line up_line1(arr_x,arr_y,n+add1);

    double up_d1=up_line1.calculate_length();

    //cout<<"The updated length of the first line is "<<up_d1<<endl;

    //adding points to line 2
    cout<<"add points in line 2: "<<endl;
    int add2;
    cin>>add2;

    arr2_x=(double*)realloc(arr2_x,(n2+add2)*(sizeof(double)));
    arr2_y=(double*)realloc(arr2_y,(n2+add2)*(sizeof(double)));

    for(int i=n2;i<n2+add2;i++)
    {
        cin>>x>>y;
        arr2_x[i]=x;
        arr2_y[i]=y;
    }


    Line up_line2(arr2_x,arr2_y,n2+add2);

    double up_d2=up_line2.calculate_length();

    cout<<"The updated length of the first line is "<<up_d1<<endl;
    cout<<"The updated length of the second line is "<<up_d2<<endl;

    if(up_d1>up_d2)
        cout<<"Line 1> Line 2"<<endl;
    else
        cout<<"Line 2> Line 1"<<endl;


}
