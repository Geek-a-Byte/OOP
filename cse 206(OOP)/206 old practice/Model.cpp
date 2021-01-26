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
    
}