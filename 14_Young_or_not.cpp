#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age >= 12 && age <= 50)
    {
        cout << "You're a young person" << endl;
    }
    else
    {
        cout << "You're not a young person" << endl;
    }

    return 0;
}
