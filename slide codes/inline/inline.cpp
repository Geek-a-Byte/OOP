

#include <bits/stdc++.h>
using namespace std;
inline int odd(int x) { return x % 2; }
int main()
{
    int result;
    for (int i = 0; i <= 10000; i++)
    {
        result = odd(i); ////Function statement is copied by the compiler Advantages
        if (result == 1)
            cout << i << "is odd";
    }
}
