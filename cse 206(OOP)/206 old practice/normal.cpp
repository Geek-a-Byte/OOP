#include<iostream>
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

