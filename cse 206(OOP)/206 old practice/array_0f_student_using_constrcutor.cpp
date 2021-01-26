#include<bits/stdc++.h>
using namespace std;

class student
{
    int id;
    string name; //char * name
public:
    student ()
    {
        cout<<"in default constructor"<<endl<<endl;
    }
    student(int a, string s)//char * s
    {
        id = a;
        name=s;//assignment operator diye string or char * pointer use korle memory address shoho copy hobe 
        cout<<"in 2 parameterized constructor : "<<name<<endl<<endl;
    }
    student(int a)
    {
        id = a;
        name ="";
        cout<<"in 1 parameterized constructor : "<<name<<endl<<endl;
    }
     friend void display(student st);
     
    
};

void display(student st)
{
    cout<<"ID  : "<<st.id<<endl;
    cout<<"Name: "<<st.name<<endl;
}

int main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    student st[n];
    for(int i=0; i<n; i++)
    {
        int id;
        string name; //char * name
        cout<<"Enter id: "<<endl;
        cin>>id;
        cin.ignore();
        cout<<"Enter name: "<<endl;
        getline(cin,name);//cin>>name
        student st2(id,name);
        st[i]=st2;
        display(st[i]);
    }
}

