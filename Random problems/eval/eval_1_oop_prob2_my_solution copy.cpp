#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, len;
    string c;

    cout << "enter the number of test cases:" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> c;
        len = c.length();
        if (len > 10)
        {
            cout << c[0] << len - 2 << c[len - 1];
        }
        else
        {
            cout << c;
        }
    }
}
//pneumonoultramicroscopicsilicovolcanoconiosis
