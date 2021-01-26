#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector<int>v;
    string str1;
	for(int i=0;i<str.length();i++)
    {
        int j=0;
        if(str[i]!=',')
           {
               str1[j]=str[i];
               j++;
           }
        else
        {
            int x;
            x=(int)(str1);
            v.push_back(x);
        }
    }
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
//23,4,56