/*
1.create a bank act->class
2.member variable user id,password
3.take input of user id, password from main then checkId, checkPass
4.cout login success or denied
5.Quit
6.main e option rakhte hobe login korbe na quit
7.if(checkId==1 && checkPass==1) then
8.1) Withdraw money. 2) Deposit money. 3) Request balance. 4) Quit the program.
9.take a while(1) loop
*/

#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

class bankAccount{
int user_id;
int password;
int balance=0;
public:

void setId(int id){
    user_id=id;
}

void setPass(int p)
{
    password=p;
}

int checkAccount(bankAccount a1,bankAccount a2)
{
    if(a2.user_id==a1.user_id && a2.password==a1.password)
        {cout<<"access granted"<<endl;
          return 1;
        }
    else{
        cout<<"access denied"<<endl;
        return 0;
    }
}

void deposit(int b)
{
    balance=balance+b;
}

void withdraw(int amn)
{
    if(balance<amn)
    {
        cout<<"Nothing to Withdraw"<<endl;
    }
    else
    {
        cout<<"Amount of withdrawal:"<<amn<<endl;
        balance=balance-amn;
    }
}

void requestBalance()
{

   cout<<"Your balance is:"<<balance<<endl;
}

};

int main()
{
  bankAccount a1,a2;
  int id;
  int p;

  while(1){
  char opt;
  cout<<"Please select an option from the menu below:"<<endl<<"l  -> Login"<<endl<<"c -> Create New Account"<<endl<<"q -> Quit"<<endl;
  cin>>opt;
  if(opt=='l')
  {
      char opt2;
      cout<<"Please enter your user name:"<<endl;
      cin>>id;
      cout<<"Please enter your password: "<<endl;
      cin>>p;
      a2.setId(id);
      a2.setPass(p);
      if(a1.checkAccount(a1,a2))
      {
          cout<<"select whether you want to deposit(d) or withdraw(w) or check balance(r) br quit(q):"<<endl;

          while(1){
                 cin>>opt2;
          if(opt2=='d')
          {
              int depo;
              cout<<"enter the amount of deposit"<<endl;
              cin>>depo;
              a1.deposit(depo);


          }
          if(opt2=='w')
          {
              int amn_of_withdraw;
              cout<<"enter the amount of withdrawal"<<endl;
              cin>>amn_of_withdraw;
              a1.withdraw(amn_of_withdraw);
          }
          if(opt2=='r')
          {
              a1.requestBalance();
          }
          if(opt2=='q')
          {
              break;
          }
          }
      }


  }
  if(opt=='c')
  {
      cout<<"Please enter your user name:"<<endl;
      cin>>id;
      cout<<"Please enter your password: "<<endl;
      cin>>p;
      a1.setId(id);
      a1.setPass(p);
      cout<<"Thank You! Your account has been created!"<<endl;

  }
  if(opt=='q')
  {
      break;
  }




}
}
