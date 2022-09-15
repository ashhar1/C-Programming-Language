#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "programming";
    cout << str.substr(3) << endl;
    cout << str.substr(3, 4) << endl;

    string str1 = "Hello";
    string str2 = "Hello";
    string str3 = "hello";
    cout << str1.compare(str2) << endl;
    cout << str2.compare(str3) << endl;
    cout << str3.compare(str2) << endl;

    string str4 = "Holiday";
    cout << str4.at(4) << endl;
    cout << str4.front() << endl;
    cout << str4.back() << endl;

    return 0;
}
