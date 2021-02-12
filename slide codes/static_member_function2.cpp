#include <bits/stdc++.h>
using namespace std;
class myCls
{
    static int x;

public:
    static void setX(int n)
    {
        x = n;
    }
    int getX()
    {
        return x;
    }
};
int myCls::x;
int main()
{
    myCls::setX(15);
    myCls o1;
    cout << o1.getX() << endl;
    o1.setX(10);
    cout << o1.getX() << endl;
}
