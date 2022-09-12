#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[20] = "Hello World";
    cout << "The length of the string is: " << strlen(s) << endl;
    char a[50] = "Good";
    char b[50] = "Morning";
    cout << strcat(a, b) << endl;
    cout << strncat(a, b, 3) << endl; // this will print GoodMor before that comment the previous line
    char c[20] = "Hello";
    char d[10];
    cout << strcpy(d, c) << endl;
    cout << strncpy(d, c, 2) << endl;

    return 0;
}
