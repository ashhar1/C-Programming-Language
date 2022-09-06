#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!" << endl;
    int a, b, c;
    cout << "Enter two number:";
    cin >> a >> b;
    c = a + b;
    cout << "Addition of two number is:" << c << endl;
    string str;
    cout << "May I know your name?";
    cin >> str;
    cout << "Hello Mr/Miss " << str;
    return 0;
}