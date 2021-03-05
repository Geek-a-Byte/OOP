#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter the number of lines: " << endl;
    cin >> n;
    string w[n];
    int l[n];
    for (i = 0; i < n; i++)
    {
        cin >> w[i];
        l[i] = w[i].size();
    }
    for (i = 0; i < n; i++)
    {
        if (l[i] <= 10)
            cout << w[i] << endl;
        else
            cout << w[i][0] << l[i] - 2 << w[i][l[i] - 1] << endl;
    }
}
