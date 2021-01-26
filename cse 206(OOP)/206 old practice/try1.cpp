/*#include<iostream>
using namespace std;

class smallonj{
    int somedata;
    public:
    void setData(int d)
    {
        somedata=d;
    }
    void showData()
{
    cout<<"data is:"<<somedata<<endl;
}
};
int main()
{
    int  data;
    cin>>data;
    smallonj obj1,obj2;

    obj1.setData(data);
    obj1.showData();
    obj1.setData(data+5);
    obj1.showData();

}
#include<iostream>
using namespace std;

class smallonj{
    int modelnumber,partnumber;
    float cost;
    public:
    void setPart(int mn,int pn,float c){
    modelnumber=mn;
    partnumber=pn;
    cost=c;
    }
    void showPart()
{
    cout<<"MODEL is:"<<modelnumber<<endl<<"part"<<partnumber<<endl<<"cost"<<cost<<endl;
}
};
int main()
{
    int  mn,pn;
    float c;
    cin>>mn>>pn>>c;
    smallonj obj1,obj2;

    obj1.setPart(mn,pn,c);
    obj1.showPart();
    //obj1.setData(mn,pn,c);
    //obj1.showData();

}*/
/*/*#include<iostream>
using namespace std;

class smallonj{
    int somedata;
    public:
    void setData(int d)
    {
        somedata=d;
    }
    void showData()
{
    cout<<"data is:"<<somedata<<endl;
}
};
int main()
{
    int  data;
    cin>>data;
    smallonj obj1,obj2;

    obj1.setData(data);
    obj1.showData();
    obj1.setData(data+5);
    obj1.showData();

}
#include<iostream>
using namespace std;

class smallonj{
    int modelnumber,partnumber;
    float cost;
    public:
    void setPart(int mn,int pn,float c){
    modelnumber=mn;
    partnumber=pn;
    cost=c;
    }
    void showPart()
{
    cout<<"MODEL is:"<<modelnumber<<endl<<"part"<<partnumber<<endl<<"cost"<<cost<<endl;
}
};
int main()
{
    int  mn,pn;
    float c;
    cin>>mn>>pn>>c;
    smallonj obj1,obj2;

    obj1.setPart(mn,pn,c);
    obj1.showPart();
    //obj1.setData(mn,pn,c);
    //obj1.showData();

}/*
#include<iostream>
using namespace std;

class counter{
    unsigned int  count0,count1,count2,count3;
    public:
        //count =0;// counter():count(0) good approach to initialize the count.
        counter() : count0(0),count1(1),count2(3),count3(5)
        {}

    void inc_count()
    {
        count0++;
        count1++;
        count2++;
        count3++;
    }
    int getCount()
    {
        return count0,count1,count2,count3;
    }

};
int main()
{
    counter c;
    for(int i=0;i<5;i++){
        c.inc_count();

    }
    cout<<c.getCount()<<endl;
}

*/
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
    Distance add_dist(Distance D2,Distance D3)
    {

        D2.feet=D2.feet+D3.feet;
       D2.inch= D2.inch+D3.inch;

       if(D2.inch>=12)
       {
           D2.feet++;
       }

        return D2;
    }
    void showDist()
    {
        if(inch>=12){
        cout<<feet<<" ";
        }
        else
            cout<<feet<<"."<<inch<<" "<<endl;
    }
};

int main()
{
    //add lengths d2,d3
    Distance d1,d2,d3;
    d1.getDist();
    d2.getDist();
    d3=d1.add_dist(d1,d2);
    d3.showDist();
}
