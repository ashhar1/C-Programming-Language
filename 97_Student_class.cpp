#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    string name;
    int phyMarks;
    int chemMarks;
    int mathMarks;

public:
    Student(int r, string n, int p, int c, int m)
    {
        roll = r;
        name = n;
        phyMarks = p;
        chemMarks = c;
        mathMarks = m;
    }
    int total()
    {
        return phyMarks + chemMarks + mathMarks;
    }
    char grade()
    {
        float average = total() / 3;
        if (average > 60)
            return 'A';
        else if (average >= 40 && average < 60)
            return 'B';
        else
            return 'C';
    }
};
int main()
{
    int roll;
    string name;
    int p, c, m;
    cout << "Enter roll number of the student: " << endl;
    cin >> roll;
    cout << "Enter name of the student: " << endl;
    cin >> name;
    cout << "Enter marks in 3 subjects: " << endl;
    cin >> p >> c >> m;
    Student s(roll, name, p, c, m);
    cout << "Total marks: " << s.total() << endl;
    cout << "Grade of the student: " << s.grade() << endl;

    return 0;
}
