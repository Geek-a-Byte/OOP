//! access specifiers || access within same cls || accessing from the derived class || accessing from outside the class
//!       private               yes                            no                                  no
//!       protected             yes                            yes                                 no
//!       public                yes                            yes                                 yes

//! basic inheritance
//! base class specified access || inheritance || derived class resulting access
//! public                           public                 public
//! protected                        public                 protected
//! private                          public                 cannot access

//! base class specified access || inheritance || derived class resulting access
//! public                           protected              protected
//! protected                        protected              protected
//! private                          protected              cannot access

//! base class specified access || inheritance || derived class resulting access
//! public                           private                private
//! protected                        private                private
//! private                          private                cannot access

/*
ex:
class A{
    public :
    int x;
    protected:
    int y;
    private:
    int x;
}
class B:public A{
    //* x is public
    //* y is protected
    //* x is not accessible
}
class C:protected A{
    //* x is protected
    //* y is protected
    //* z is not accessible
}
class D: private A{
    //* x is private
    //* y is private
    //* z is not accessible 
}
*/
#include <iostream>
using namespace std;

class base
{

protected:
    int hiddBaseVar = 10;
    void hiddenbase()
    {
        cout << "hiddenBase"
             << endl;
    }

public:
    int pubBaseVar = 200;
    void publicbase()
    {
        cout << "publicBase"
             << endl;
    }
};

class derived : protected base
{
    //hiddBaseVar  -> protected
    //publicbase() -> protected ->cant be called from main
    //hiddenbase() -> protected ->cant be called from main
protected:
    void hiddenderived()
    {
        publicbase(); //...publicbase was accessible within base class from main
                      //...but now it is called within a protected function in derived class
                      //...so will be inaccessible from main
    }

public:
    void publicderived()
    {
        cout << hiddBaseVar << endl;
        hiddBaseVar = 20;
        cout << hiddBaseVar << endl;
        publicbase(); //....publicBase was inaccessible from main
                      //    but now as called within a public function it can be accessed from main
        hiddenbase(); //....same applies for hiddenbase
    }
};

int main()
{

    base b;
    b.publicbase();
    //b.hiddenbase(); //cannot access
    //d.hiddenderived();//protected

    derived d;
    d.publicderived();

    //d.hiddenderived();//cannot access
    //d.hiddenbase();//cannot access
    //d.publicbase();//cannot access

    return 0;
}
//!First, you can only change those access specifiers of base class, which the derived class would be able to access.
//!Therefore, you can never change the access specifier of a base member from private to protected or public,
//! because derived classes do not have access to private members of the base class.

/*
o/p:
publicBase
10
20
publicBase
hiddenBase
*/