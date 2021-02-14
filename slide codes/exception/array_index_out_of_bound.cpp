#include <bits/stdc++.h>
using namespace std;
class Numlist
{
    int *a;
    int size;

public:
    Numlist(int s)
    {
        a = new int[s];
        size = s;
    }
    void putAt(int index, int v) { a[index] = v; }
    int getAt(int index) { return a[index]; }
};
void manipList(Numlist *list, int op)
{
    int index;
    if (op == 1)
    {

        cout << "input index\n";
        cin >> index;
        int val;
        cout << "val\n";
        cin >> val;
        list->putAt(index, val);
    }
    else if (op == 2)
    {
        cout << "input index\n";
        cin >> index;
        cout << list->getAt(index);
    }
    else if (op != 1 || op != 2)
    {
        cout << "wrong option\n";
        return;
    }
}

main()
{
    // Numlist list(10);
    // int index, val;
    // cin >> index >> val;
    // list.putAt(index, val);
    // cout << list.getAt(index);
    Numlist *list = new Numlist(100); //! ei line na thakle null pointer exception hobe karon list is not initialized yet we are putting or getting values
    while (1)
    {
        int op;
        cout << "option 1->Put\noption 2->Get : ";
        cin >> op;
        if (op > 2 || op <= 0)
        {
            break;
        }
        manipList(list, op);
    }
}