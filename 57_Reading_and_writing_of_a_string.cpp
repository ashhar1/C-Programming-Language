#include <iostream>
using namespace std;

int main()
{
    char s[20];
    cout << "Enter your name: " << endl;
    cin >> s;
    cout << "Welcome " << s << endl;
  
    // comment out or don't use the previous code for the new one execution
    
    char a[20];
    cout << "Enter your name: " << endl;
    cin.get(a, 20); // we can also use cin.getline(a, 20);
    cout << "Welcome " << a << endl;
  
    return 0;
}
