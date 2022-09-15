#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "Hello";
    cout << str.append(" World") << endl;
    cout << str.insert(3, "kk") << endl;
    cout << str.insert(3, "Apple", 2) << endl;
    string s = "How you";
    cout << s.insert(3, " area ", 4) << endl;

    return 0;
}
