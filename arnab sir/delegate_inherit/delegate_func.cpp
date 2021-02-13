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
    //setmarks() ->private
    //getthoery()->private
    //getsessional()->private
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
    /*
    here we are taking an object of the class result which inherits the data members of class student 
    in private mode.so all the methods of student class become private in the derived class result.
    so we cant access setmarks() method from main using the obj of result class, therefore we had to
    create public method entrymarks() to set the marks, then entrymarks() method handovers 
    this particular task to setmarks() in result class, as setmarks(), being private ,can be accessed
    within the same class.and then setmarks() does the job of entrymarks, thus setmarks() works as a
    delegate function.
    to the world the job of entrymarks() is done by entrymarks(),
    but in reality it handovers the job to setmarks() method.       
    */
    result res;
    res.entrymarks(75, 85);
    res.show();
}
