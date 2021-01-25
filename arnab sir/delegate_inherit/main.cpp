#include <iostream>
using namespace std;
class student
{
    int theory, sessional; //private
public:
    void setmarks(int th, int ses)
    {
        theory = th;
        sessional = ses;
    }
    int gettheory()
    {
        return theory;
    }
    int getsessional()
    {
        return sessional;
    }
};

class result : private student
{
    //here setmarks is private which can be accessed only by this class members'
public:
    void entrymarks(int a, int b)
    {
        setmarks(a, b); // delegate function
    }
    void show()
    {
        int total = gettheory() + getsessional();
        cout << "inside result class : result = " << total << endl;
    }
};

int main()
{
    result res;
    res.entrymarks(75, 85);
    res.show();
}
