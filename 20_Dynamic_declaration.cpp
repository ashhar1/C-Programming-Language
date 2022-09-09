#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 5;
    {
        int c = a + b;
        if (c > 10)
        {
            cout << c << endl;
        }
    }
    //cout << c << endl; -> this will not get executed because the memory of variable c is valid till the dummy block
    //if(int c = a + b; c > 10) -> this is valid in C++ 17
    return 0;
}
