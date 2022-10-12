#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> l = {2, 4, 6, 8, 10};
    l.push_front(20);
    l.push_front(30);
    forward_list<int>::iterator itr;
    cout << "Using Iterator" << endl;

    for (itr = l.begin(); itr != l.end(); itr++)
    {
        cout << ++*itr << endl;
    }

    cout << "Using For Each Loop" << endl;

    for (int x : l)
    {
        cout << x << endl;
    }

    return 0;
}
