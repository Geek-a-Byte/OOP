//! namespace defines scope
#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1)

namespace SquareSpace
{
    void Area(int a)
    {
        cout << "area of the square is " << a * a << "\n";
    }
} // namespace SquareSpace

namespace CircleSpace
{
    void Area(int r)
    {
        cout << "area of the circle is " << 2 * PI * r << "\n";
    }
} // namespace CircleSpace

int main()
{
    int a, r;
    cin >> a >> r;
    SquareSpace::Area(a);
    CircleSpace::Area(r);
}