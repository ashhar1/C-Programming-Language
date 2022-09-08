#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    if (age <= 12 || age >= 50)
    {
        cout << "You're eligible for the offer" << endl;
    }
    else
    {
        cout << "You're not eligible for the offer" << endl;
    }

    return 0;
}
