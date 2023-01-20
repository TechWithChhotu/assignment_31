/*Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.
*/
#include <iostream>
using namespace std;
class Person
{
private:
    string Name;
    int Age;

public:
    void SetName(string name)
    {
        Name.assign(name);
    }
    void SetAge(int age)
    {
        Age = age;
    }
    string GetName()
    {
        return Name;
    }
    int GetAge()
    {
        return Age;
    }
};
class Employee : public Person
{
private:
    int EmpId;
    float Salary;

public:
    void SetEmpId(int x)
    {
        EmpId = x;
    }
    void SetSalary(int x)
    {
        Salary = x;
    }
    int GetEmpId()
    {
        return EmpId;
    }
    float GetSalary()
    {
        return Salary;
    }
};
int main()
{
    Employee Emp1;
    Emp1.SetName("Chhotu");
    Emp1.SetAge(18);
    Emp1.SetEmpId(1232);
    Emp1.SetSalary(1000);

    cout << "Name:    " << Emp1.GetName() << endl;
    cout << "Age:     " << Emp1.GetAge() << endl;
    cout << "ID:      " << Emp1.GetEmpId() << endl;
    cout << "Salary:   " << Emp1.GetSalary() << endl;
    return 0;
}
