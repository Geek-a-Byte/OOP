#include<iostream>
#include<cstring>
#include<stdio.h>
//string.h er shob function nite
using namespace std;

namespace Squarespace{
void area(float n){
cout<<n*n<<endl;}
}

namespace Circlespace{
void area(float n){
cout<<3.14*n*n<<endl;}
}
class A{
private :
    int id;
    public:
    void setId()
    {

         scanf("%d",&id);

        ///cout<<id<<endl;

    }
    void print()
    {
        cout<<id<<endl;
    }
};

int main()
{
    float n;
     cin>>n;
    Squarespace :: area(n);
    Circlespace :: area(n);
    ///word input neyar jonno string

    A var;
    var.setId();
    var.print();

    string s,h,a;
    cin>>s;
    cout<<s<<endl;

    cin.ignore();

    getline(cin,h);
    cout<<h<<endl;

    //cin.ignore(); getline diye pura ek line neyar pore ignore deya lagbe na karon enter dilei null dhore nibe
    cin>>a;
    cout<<a<<endl;

}
