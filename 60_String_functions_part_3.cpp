#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s1[10] = "235";
    char s2[10] = "54.78";

    long int x = strtol(s1, NULL, 10);
    float y = strtof(s2, NULL);
    cout << x << endl;
    cout << y << endl;
    cout << x + 10 << endl;
    cout << y - 5 << endl;

    char s3[20] = "x=10;y=20;z=35";
    char *token = strtok(s3, "=;");
    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;"); // it will work on the same string so NULL part is important
    }

    return 0;
}
