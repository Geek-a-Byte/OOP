#include <bits/stdc++.h>

using namespace std;

//! template<class T>
//! class class_name{}

//* object instantiation -> class_name<type>obj
template <class TYPE>
class Stack
{
    TYPE *s;
    int top;

public:
    Stack(int size)
    {
        s = new TYPE[size];
        top = -1;
    }

    ~Stack() { delete[] s; }
    void push(TYPE c)
    {
        s[++top] = c;
    }
    TYPE pop()
    {
        return s[top--];
    }
};
int main()
{
    //100 char Stack
    Stack<char> stk_ch(100);
    stk_ch.push('a');
    cout << stk_ch.pop() << " ";
    //200 int Stack
    Stack<int> stk_int(200);
    stk_int.push(1);
    cout << stk_int.pop() << " ";
    //20 floatStack
    Stack<float> stk_float(20);
    stk_float.push(1.5);
    cout << stk_float.pop() << " ";
}