//preprocessor directorives
//! lines starting with # are preprocessor commands
/*
    1.Additional information to differentiate 
    similar functions, classes, variables etc 
    with the same name, available in different libraries.
    2.namespace defines a scope
    3.default namespace standard
    4.std is the abbreviation of namespace standard
    5.if not used "using namespace std;"
      then we have to use std:: before every namespace enabled version of the function
      ex: std::cout<< “hello”<<std::endl;
          std::cin.get();
    6.after writing "using namespace std;"
          cout<< “hello”<<std::endl;
          cin.get();
*/
#include <bits/stdc++.h>
using namespace std;
namespace first_space
{
    void display()
    {
        cout << "inside first_space\n";
    }
} // namespace first_space
namespace second_space
{
    void display()
    {
        std::cout << "inside second_space\n";
    }
} // namespace second_space
using namespace first_space;
int main()
{
    //first_space::display();
    display();
    second_space::display();
}

/*
when 34 & 37 line is commented out
o/p:
inside first_space
inside second_space
*/

/*
when only 37 line is commented out
o/p:
inside first_space
inside second_space
*/
