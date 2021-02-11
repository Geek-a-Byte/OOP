// If no user-defined constructor exists for a class A and one is needed, the compiler implicitly declares a default parameterless constructor A::A(). This constructor is an inline public member of its class. The compiler will implicitly define A::A() when the compiler uses this constructor to create an object of type A. The constructor will have no constructor initializer and a null body.

#include <bits/stdc++.h>
using namespace std;

#define max 3

class StackFull
{
};
class StackEmpty
{
};

class Stack
{
    int S[max], top;

public:
    Stack()
    {
        top = -1; //auto called when an object of this class is created
    }
    void push(int v)
    {
        if (top >= max - 1)
        {
            throw StackFull();
        }
        S[++top] = v;
    }
    int pop()
    {
        if (top < 0)
        {
            throw StackEmpty();
        }
        return S[top--];
    }
};

int main()
{
    Stack st;
    try
    {
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
        cout << st.pop() << endl;
    }
    catch (StackFull F)
    {
        cout << "Exception:Stack is Full\n";
    }
    catch (StackEmpty E)
    {
        cout << "Exception: Stack is Empty\n";
    }
}