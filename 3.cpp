/*Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.
*/
#include <iostream>
using namespace std;
class FirstLevel
{
protected:
    int FirstSub, SecondSub, ThirdSub;

public:
    void InputMarks()
    {
        cout << "Enter Marks of three subject(C,C++,DSA): ";
        cin >> FirstSub >> SecondSub >> ThirdSub;
    }
};
class SecondLevel : public FirstLevel
{
public:
    int TotalMarks()
    {
        return FirstSub + SecondSub + ThirdSub;
    }
};
class ThirdLevel : public SecondLevel
{
public:
    float PercentageMarks()
    {
        return TotalMarks() / 3.0;
    }
};

int main()
{
    ThirdLevel s1;
    s1.InputMarks();
    cout << "Total Marks of three subjects is " << s1.TotalMarks() << endl;
    cout << "Percentage marks of three subject is " << s1.PercentageMarks() << endl;
    return 0;
}
