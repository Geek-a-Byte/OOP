//pre-processor directives
#include<iostream>
#include<stdio.h>
using namespace std;//(ditei hobe)

//user-defined namespace declaration
namespace first_space
{
void printf(string p)
{
  cout<<"hi"<<endl;
}
}

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
   printf("hello world\n");
   
   for(int i=0;i<5;i++){

   first_space :: printf("hello cse 19");

   printf("hello world\n");
   }
    //:: scope resolution*/
}


