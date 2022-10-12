#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d = {2, 4, 6, 8, 10};
    d.push_back(20);
    d.push_back(30);
    deque<int>::iterator itr;
    cout << "Using Iterator" << endl;

    for (itr = d.begin(); itr != d.end(); itr++)
    {
        cout << ++*itr << endl;
    }

    cout << "Using For Each Loop" << endl;

    for (int x : d)
    {
        cout << x << endl;
    }

    return 0;
}
