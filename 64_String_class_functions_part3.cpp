#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str = "Hello";
    string str1 = "Welcome";
    char s[10];
    char r[10];
    str.copy(s, str.length());
    cout << s << endl;
    str1.copy(r, 3);
    cout << r << endl;

    string s1 = "How are you";
    cout << s1.find("are") << endl;
    cout << s1.find('y') << endl;
    cout << s1.find('o') << endl;
    cout << s1.rfind('o') << endl;
    cout << s1.rfind('k') << endl;

    string s2 = "Hello World";
    cout << s2.find_first_of('l') << endl; // with a particular index we can write s2.find_first_of('l',3);
    cout << s2.find_last_of('o') << endl;
    cout << s2.find_first_of("le") << endl;

    return 0;
}
