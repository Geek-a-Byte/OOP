//preprocessor directorives
//! lines starting with # are preprocessor commands
#include <bits/stdc++.h>
using namespace std;
//*default namespace standard
//*std is the abbreviation of namespace standard
/*
if not used "using namespace std"\
then we have to use std:: before every namespace enabled version of the function

*/
/// namespace defines a scope
namespace first_space
{
    void printf(char *p)
    {
        cout << "Inside first_space\n";
    }
    void display()
    {
        cout << "inside first_space\n";
    }
} // namespace first_space
namespace second_space
{
    void display()
    {
        cout << "inside second_space\n";
    }
} // namespace second_space
using namespace first_space;
int main()
{
    //first_space::printf("hello");
    //first_space::display();
    display(); //!using namespace first_space likhate display function scope resolution call kora charao first_spce theke print hoy
    printf("hello\n");
    second_space::display();
}
