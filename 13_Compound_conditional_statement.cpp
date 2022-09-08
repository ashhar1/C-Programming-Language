#include <iostream>
using namespace std;

int main()
{
    int hour;
    cout << "Enter the hour according to 24-hour format: " << endl;
    cin >> hour;
    if (hour >= 9 && hour <= 18)
    {
        cout << "It's working hour";
    }
    else
    {
        cout << "It's leisure hour";
    }

    return 0;
}
