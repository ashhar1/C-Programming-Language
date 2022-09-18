#include <iostream>
using namespace std;

int x = 10;
int main()
{
    int x = 20;
    {
        int x = 30;
        cout << x << endl;
    }
    cout << x << endl;
    cout << ::x << endl; // this will print the global one as we are using scope resolution

    return 0;
}
