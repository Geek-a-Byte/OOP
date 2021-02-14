#include <bits/stdc++.h>
using namespace std;

class myclass
{
    static int x;
    int y;

public:
    void setX(int n)
    {
        x = n;
    }
    void setY(int n)
    {
        y = n;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    static void show(int n)
    {
        cout << n << endl;
    }
};
int myclass::x = 8;

int main()
{
    myclass o1, o2;
    o1.show(10);
    myclass::show(15);
    //myclass::x = 7; //error
    o1.setY(10);
    o2.setY(16);
    cout << o1.getX() << " " << o1.getY() << endl;
    cout << o2.getX() << " " << o2.getY() << endl;
}