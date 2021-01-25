/*The diamond problem occurs when two superclasses of a class have a
    common base class.For example,
    in the following diagram,
    the TA class gets two copies of all attributes of Person class,
    this causes ambiguities.
    */
#include <iostream>
using namespace std;
class Person
{
    // Data members of person
public:
    Person(int x)
    {
        cout << "Person::Person(int ) called" << endl;
    }
    Person() { cout << "Person::Person() called" << endl; } //!default const dite hobe naile error dei
};

class Faculty : virtual public Person //!faculty keo virtual korbo
{
    // data members of Faculty
public:
    Faculty(int x) : Person(x)
    {
        cout << "Faculty::Faculty(int ) called" << endl;
    }
};

class Student : virtual public Person //!student ke virtual korbo
{
    // data members of Student
public:
    Student(int x) : Person(x)
    {
        cout << "Student::Student(int ) called" << endl;
    }
};

class TA : public Faculty, public Student //!this order matters in case of printing
{
public:
    TA(int x) : Student(x), Faculty(x), Person(x) //remove the two virtual keywords to see the error
    {
        cout << "TA::TA(int ) called" << endl;
    }
};

int main()
{
    TA ta1(30);
}

/*
In the above program, constructor of ‘Person’ is called two times.
 Destructor of ‘Person’ will also be called two times when object ‘ta1’
  is destructed. So object ‘ta1’ has two copies of all members of ‘Person’, 
  this causes ambiguities. 
  The solution to this problem is ‘virtual’ keyword.
   We make the classes ‘Faculty’ and ‘Student’ as virtual base classes 
   to avoid two copies of ‘Person’ in ‘TA’ class. 
*/

/*
after changing these
1. take a default const of person class
2. make faculty virtual
3. make student virtual
In the above program, constructor of ‘Person’ is called once. 
 
1.the default constructor of ‘Person’ is called. 
2.When we use ‘virtual’ keyword, the default constructor of grandparent class 
is called by default even if the parent classes explicitly call parameterized constructor.
*/

/*
after changing this
1. the parameterized constructor of person is called on with student
and faculty in TA class
In general, it is not allowed 
to call the grandparent’s constructor directly, 
it has to be called through parent class. 
It is allowed only when ‘virtual’ keyword is used.
*/