/*Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manger(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.
*/
#include<iostream>
using namespace std;
class Worker{
    int Code;
    string Name;
    float Salary;
};
class Officer{
    float DA, HRA;
};
class Manager:public Worker,public Officer{
    float TA, GrossSalary;
};
int main(){

    return 0;
}
