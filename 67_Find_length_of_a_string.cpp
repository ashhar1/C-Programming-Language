#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int length = 0;
    string str = "WELCOME";
    // using for loop
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    cout << "The length of the string is: " << length << endl;
    // using string iterator
    string::iterator it;
    int count = 0;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }
    cout << "The length of the string is: " << count << endl;

    return 0;
}
