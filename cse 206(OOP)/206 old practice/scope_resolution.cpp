//pre-processor directives
#include<iostream>
#include<stdio.h>
using namespace std;//(ditei hobe)

//user-defined namespace declaration
namespace first_space
{
void print(string p)
{
  cout<<"hi"<<endl;
}
}

//using namespace (name of the user defined namespace) deyar pore main function e scope res chara or shoho oi function e ja print korte bola hoise tai print hobe
using namespace first_space;

int main()
{
    std::cout<<"Hello Cse 19"<<std::endl;
    printf("Enter the integer,float, character:\n");
    int i;
    float j;
    char c;
    cin>>i>>j>>c;

    printf("the input of int float char was:\n");
    cout<<i<<" "<<j<<" "<<c<<"\n"<<endl;

   ///using namespace first_space;(deya lagbe na)
   print("hello world\n");
   for(int i=0;i<5;i++){

   first_space :: print("hello cse 19");

   print("hello world\n");
   }
    //:: scope resolution*/
}


