#include<bits/stdc++.h>
using namespace std;
class trust;
class dbbl{
int balance;
public:
    dbbl(int b){
    balance=b;
    }
    void setBalance(int x){
        balance=x;
    }
    int getBalance(){
        return balance;
    }
      friend void transferMoney(dbbl *d,trust *t,int choice,int balance);
      friend void display(dbbl d,trust t);
};

class trust{

int balance;
public:
    trust(int b){
    balance=b;
    }
   void setBalance(int x){
        balance=x;
    }
    int getBalance(){
        return balance;
    }
     friend void transferMoney(dbbl *d,trust *t,int choice,int balance);
     friend void display(dbbl d,trust t);
};

void transferMoney(dbbl *d,trust *t,int choice,int balance)
{
 if(choice==2) //dbbl to trust
 {
    d->balance=d->balance-balance;
    t->balance=t->balance+balance;
 }
 else if(choice==1){ // trust to dbbl
    t->balance=t->balance-balance;
    d->balance=d->balance+balance;
 }

}
void display(dbbl d,trust t){
        cout<<d.balance<<endl;
        cout<<t.balance<<endl;
}
int main()
{
    int p, q, ch, m;
	cout<<"enter balance for dbbl and trust bank acc"<<endl;
	cin>>p>>q;
	dbbl d(p);
	trust t(q);
	while(5)
	{
		cout<<"1-trust to dbbl"<<endl;
    	cout<<"2-dbbl to trust"<<endl;
    	int ch;
    	cin>>ch;
    	cout<<"amount to transfer?"<<endl;
    	cin>>m;
    	transferMoney(&d,&t,ch,m);
    	display(d,t);
	}
}
