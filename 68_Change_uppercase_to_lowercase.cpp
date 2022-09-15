#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "HELLO";
    // using string iterator
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        *it = *it + 32;
    }
    cout << "The string in lowercase is: " << str << endl;
    // using for loop
    string s = "WELCOME";
    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + 32;
    }
    cout << "The string in lowercase is: " << s << endl;

    return 0;
}
