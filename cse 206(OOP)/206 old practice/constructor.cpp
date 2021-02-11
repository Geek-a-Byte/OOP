#include<iostream>
using namespace std;

class counter{
    unsigned int  count0,count1,count2,count3;
    public:
        //count =0;// counter():count(0) good approach to initialize the count.
        counter() : count0(0),count1(1),count2(3),count3(5)
        {}

    void inc_count(int n)
    {
        if(n==0)count0++;
        if(n==1)count1++;
        if(n==2)count2++;
        if(n==3)count3++;
    }
    int getCount(int n)
    {
        
        if(n==0)
        return count0;
        if(n==1)
        return count1;
        if(n==2)
        return count2;
        if(n==3)
        return count3;
    }

};
int main()
{
    counter c;
    int n;
    cin>>n;
    for(int i=0;i<5;i++){
        c.inc_count(n);

    }
    cout<<c.getCount(n)<<endl;
}