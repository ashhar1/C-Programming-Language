#include <iostream>
using namespace std;

void fun()
{
    static int s = 10;
    int a = 11;
    s++;
    a++;
    cout << s << endl;
    cout << a << endl;
}
int main()
{
    fun();
    fun();
    fun();

    return 0;
}
