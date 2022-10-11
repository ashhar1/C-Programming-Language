#include <iostream>
using namespace std;

class Student
{
public:
    int roll;
    string name;

    static int admission_number;

    Student(string n)
    {
        admission_number++;
        roll = admission_number;
        name = n;
    }

    void display()
    {
        cout << "Name " << name << endl;
        cout << "Roll " << roll << endl;
    }
};

int Student::admission_number = 0;
int main()
{
    Student s1("John");
    Student s2("Ravi");
    Student s3("Joseph");
    Student s4("Ahmed");
    Student s5("Rahul");
    Student s6("Khan");

    s1.display();
    s6.display();

    cout << "Number Admission " << Student::admission_number << endl;

    return 0;
}
