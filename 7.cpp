/*Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.
*/
#include <iostream>
#include <conio.h>
using namespace std;
class Employee
{
protected:
    int Emp_Code;
    string Emp_Name;
};
class FullTime : protected Employee
{
private:
    float DailyRate, Salary;
    int NumberOFDays;
};
class PartTime : protected Employee
{
private:
    float WorkingHours, HourlyRate, Salary;
};
int main()
{
    char IndexN;

    do
    {
        system("cls");
        cout << "1. Enter Record" << endl;
        cout << "2. Display Record" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Quit" << endl;
        cout << "----------------------" << endl;
        cout << "Enter your choice(1-4):  ";
        IndexN = getch();
        cout << IndexN;
    } while (IndexN != '4');

    
    return 0;
}
