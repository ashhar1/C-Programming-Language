#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "Hello";
    string s1 = "";
    cout << "The length of the string is: " << str.length() << endl;
    cout << "The capacity is: " << str.capacity() << endl;
    str.resize(50);
    cout << "The capacity is: " << str.capacity() << endl;
    cout << str.max_size() << endl;
    str.clear();
    cout << str.length() << endl;
    if (s1.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is: " << s1 << endl;
    }

    return 0;
}
