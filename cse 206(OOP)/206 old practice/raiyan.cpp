#include<bits/stdc++.h>

using namespace std;

class student
{
    double cgpa;
public:
    string name;
    int id;

    void setdata()
    {
        cin >> name >> id >> cgpa;
    }

    double getcg()
    {
        return cgpa;
    }
};

double checkID(int id, student s[], int n)
{
    for(int i = 0; i<n; i++){
        if(s[i].id == id){
            double cg = s[i].getcg();
            return cg;
        }
    }
    cout << "ID not found\n";
    return 0;
}
main()
{
    cout << "Enter the no of students: ";
    int n; cin >> n;

    student st[n];

    for(int i = 0; i<n; i++){
        st[i].setdata();
    }

    double sum = 0;

    for(int i = 0; i<n; i++){
        double v = st[i].getcg();
        sum += v;
    }

    double average = sum/(double)n;

    cout << "Enter the ID: ";
    int idtocheck; cin >> idtocheck;

    double cgpa_of_id = checkID(idtocheck, st, n);
    double factor = cgpa_of_id / average;

    if(factor > 0.0)
        cout << fixed << setprecision(4) << "Factor: " << factor << endl;
}
