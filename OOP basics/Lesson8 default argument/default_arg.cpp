#include <bits/stdc++.h>
using namespace std;
//int totalMark(int phy, int chem, int opt = 0); //....previous specification of default arg if done, then in the definition it
// is not needed to define again
int totalMark(int phy, int chem, int opt = 0)
{
    //...opt=0 can't be in 1st or 2nd argument
    int total = phy + chem + opt;
    return total;
}

// int totalMark(int phy, int chem, int opt = phy) // ... phy is undefined
// {
//     int total = phy + chem + opt;
//     return total;
// }
// int totalMark(int opt = 0, int phy, int chem) //...error: default argument missing for parameter 2 and 3
// {
//     int total = phy + chem + opt;
//     return total;
// }

int main()
{
    cout << totalMark(80, 90) << endl; //170
    cout << totalMark(80, 90, 80);     //250
}
