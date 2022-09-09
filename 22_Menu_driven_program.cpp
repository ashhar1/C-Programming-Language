#include <iostream>
using namespace std;

int main()
{
    cout << "Menu" << endl;
    cout << "1. Add\n"<<"2. Subtract\n"<<"3. Multiplication\n"<<"4. Division\n"<<endl;
    int option;
    cout << "Enter your choice :" << endl;
    cin >> option;
    int a, b, c;
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    default:
        cout << "Invalid option chosen" << endl;
    }
    cout << "Result for your option chosen is: " << c << endl;

    return 0;
}
