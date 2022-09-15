#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[20] = "Programming";
    char s2[20] = "kite";
    if (strstr(s1, s2) != NULL)
    {
        cout << strstr(s1, s2) << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    cout << strchr(s1, 'g') << endl;
    cout << strrchr(s1, 'r') << endl;

    char s3[20] = "hello";
    char s4[20] = "Hello";
    cout << strcmp(s3, s4) << endl;

    return 0;
}
