#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l = {2, 4, 6, 8, 10};
    l.push_back(20);
    l.push_back(30);
    list<int>::iterator itr;
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
