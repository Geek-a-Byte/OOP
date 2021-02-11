#include<bits/stdc++.h>
using namespace std;

class student
{
    int id;
    char *name;
public:
    student ()
    {
       cout<<"in default constructor"<<endl<<endl;
    }
    student(int a, char s[])
    {
        name = new char();
        id = a;
        strcpy(name,s);
        cout<<"in 2 parameterized constructor : "<<name<<endl<<endl;
    }
    student(int a)
    {
        id = a;
        name = NULL;
        cout<<"in 1 parameterized constructor : "<<name<<endl<<endl;

    }
    student(const student &st)
    {
        this->name = new char();
        this->id = st.id;
        strcpy(this->name, st.name);//strcpy use korle memory address copy hoi na khali name assign hobe 
        cout<<"in copy constructor : "<<st.name<<endl<<endl;
    }

    friend void display(student st);

    ~student()
    {
        delete[] name;
        cout<<"destructing : "<<name<<endl<<endl;
    }

};

void display(student st)
{
    cout<<"ID  : "<<st.id<<endl;
    cout<<"Name: "<<st.name<<endl;
    cout<<endl<<endl;
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
        //stack e memory

        char name[20];

        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter id: ";
        cin>>id;
        //jodi name na mile tokhon - input nibo
        if(name[0] == '-')
        {
            student st2(id);//temp object nibo ei scope er jonno
            //st[i] = st2;
            st[i]=student(st2);
        }
        else
        {
            student st2(id,name);//temp obj nibo
            //st[i] = st2;//bit by bit copy
            //st[i] r st2 eki name or eki memory ke point korbe
            //st2 jodi delete hoye jay then st[i] haraye jabe

            st[i]=student(st2);

            //copy constructor use korle st2 and st[i] er different memory location thakbe 
            //so st2 delete hoye geleo st[i] delete hobe na 
        }
    }
    for(int i=0; i<n; i++)
    {
        display(st[i]);
    }
}


//st[i]=student(st2);
/*
Enter number of students: 2
in default constructor
in default constructor
Enter name: faria
Enter id: 12
in 2 parameterized constructor : faria ->st2 declare 
in copy constructor : faria ->student(st2) akare object pass korar jonno
destructing : faria -> copy constructor er st er destroy
destructing : faria -> else er brackett end howar por st2 destroy hoye jabe
Enter name: nazia 
Enter id: 32
in 2 parameterized constructor : nazia
in copy constructor : nazia
destructing : nazia
destructing : nazia
in copy constructor : faria->display te object pass korar jonno
ID  : 12
Name: faria
destructing : faria ->copy contructor er st destory hobe 
in copy constructor : nazia
ID  : 32
Name: nazia
destructing : nazia
destructing : nazia->array jei order e call hoyechilo tar biporit order e destruct hobe
destructing : faria
*/


//eta 3 or 3 er beshi input e ulta palta output dibe
//st[i]=st2
/*
Enter number of students: 2
in default constructor
in default constructor
Enter name: nazia
Enter id: 32
in 2 parameterized constructor : nazia->shorashori assignment hobe copy constructor call hobe na
destructing : nazia 
Enter name: faria
Enter id: 12
in 2 parameterized constructor : faria
destructing : faria
in copy constructor : nazia
ID  : 32
Name: nazia
destructing : nazia
in copy constructor : faria
ID  : 12
Name: faria
destructing : faria
destructing : faria
destructing : nazia
*/