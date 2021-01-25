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
};
int myclass::x;

int main()
{
    myclass o1, o2;
    o1.setX(1);
    o1.setY(16);
    cout << o1.getX() << " " << o1.getY() << endl;
    cout << o2.getX() << " " << o2.getY() << endl;

}