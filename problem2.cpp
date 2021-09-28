#include <iostream>
using namespace std;

class shape // abstract class or interface
{
public:
    virtual double getarea() = 0; // "pure specifier"  - pure virtual function
};
class Rectangle : public shape //concrete
{
     int breadth, height;
public:
    Rectangle(int b,int h)
    {
        breadth=b;
        height=h;
    }
    double getarea()
    {
        return breadth * height;
    }
};
class triangle : public shape //concrete
{
    int height, base;
public:
    triangle(int h,int b)
    {
        height=h;
        base=b;
    }
    double getarea()
    {
        return 0.5 * height * base;
    }
};
class circle : public shape //concrete
{
      int radius;
public:
    circle(int r)
    {
        radius=r;
    }
    double getarea()
    {
        return 3.14 * radius * radius;
    }
};
class Square : public shape //concrete
{
    int length;
public:
    Square(int l)
    {
        length=l;
    }
    double getarea()
    {
        return length*length;
    }
};
void show(shape *obj)
{
    /*
    Derived d1;  //obj of derived class
    base *b1;    //pointer of base cls
    b1 = &d1;    //base class pointer pointing to derived class pointer
    b1->print(); //print() of derived class is being called upon,
    so it depends on the type of object which is pointed to, not the type of pointer
    */
    cout << "area is " << obj->getarea() << endl;
}

int main()
{

    int choice;
    while(1){
    cout<<"type 1 for rectangle area\n";
    cout<<"type 2 for triangle area\n";
    cout<<"type 3 for circle area\n";
    cout<<"type 4 for square area\n";
    cout<<"type 5 for exit\n";

    cin>>choice;
    shape *s;
    if(choice==1)
    {
        int a,b;
        cin>>a>>b;
        Rectangle rec(a,b);
        s=&rec;
    }
     if(choice==2)
    {
        int a,b;
        cin>>a>>b;
        triangle tri(a,b);
        s=&tri;
    }

     if(choice==3)
    {
        int a;
        cin>>a;
        circle cir(a);
        s=&cir;
    }

     if(choice==4)
    {
        int a;
        cin>>a;
        Square squ(a);
        s=&squ;
    }
    if(choice==5)
    {
        break;
    }
    show(s);
    }

    return 0;
}
