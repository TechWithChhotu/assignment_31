/*Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary
*/
#include <iostream>
using namespace std;
class Person
{
protected:
    string Name, Address, PhoneNumber;
};
class Employee : public Person
{
protected:
    int EmployeementNumber;
};
class Manager : public Employee
{
private:
    string Designation, DepartmentName;
    float Salary;

public:
    void EnputDetails()
    {
        cout << "\n-:Enter Manager Details:- " << endl;
        cout << "Employeement Number:   ";
        cin >> EmployeementNumber;
        fflush(stdin);
        cout << "Name       :  ";
        getline(cin, Name);
        cout << "Address    :  ";
        getline(cin, Address);
        cout << "PhoneNumber:  ";
        getline(cin, PhoneNumber);
        cout << "Designation :  ";
        getline(cin, Designation);
        cout << "Department  :  ";
        getline(cin, DepartmentName);
        fflush(stdin);
        cout << "Salary      :  ";
        cin >> Salary;
    }
    void DisplayDetails()
    {

        cout << "Manager with highest Salary is " << Salary << " and EmployeementNumber is " << EmployeementNumber << " and ManagerName is " << Name << endl;
    }
    float GetSalary() { return Salary; }
};
int main()
{
    int N, i;
    cout << "How many manager details you want to enter:  ";
    cin >> N;
    Manager M[N];
    for (int i = 0; i < N; i++)
    {
        M[i].EnputDetails();
    }
    float HighestSalary = 0;

    for (int j = 0 + 1; j < N; j++)
    {
        if (HighestSalary < M[j].GetSalary())
        {
            HighestSalary = M[j].GetSalary();
            i = j;
        }
    }
    M[i].DisplayDetails();
    return 0;
}
