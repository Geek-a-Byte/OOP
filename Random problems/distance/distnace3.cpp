#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inch;

public:
    void getDist()
    {
        cout << "\nEnter feet: ";
        cin >> feet;
        cout << "\nEnter inches: ";
        cin >> inch;
    }
    Distance add_dist(Distance D2, Distance D3)
    {

        D2.feet = D2.feet + D3.feet;
        D2.inch = D2.inch + D3.inch;

        if (D2.inch >= 12)
        {
            D2.feet++;
        }

        return D2;
    }
    void showDist()
    {
        if (inch >= 12)
        {
            cout << feet << " ";
        }
        else
            cout << feet << "." << inch << " " << endl;
    }
};

int main()
{
    //add lengths d2,d3
    Distance d1, d2, d3;
    d1.getDist();
    d2.getDist();
    d3 = d1.add_dist(d1, d2);
    d3.showDist();
}
