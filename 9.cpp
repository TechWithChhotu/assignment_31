/*Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.
*/
#include <iostream>
using namespace std;
class Student
{
protected:
    int StudentID;
    string StudentName;
};
class StudentExam : public Student
{
protected:
    int S_1st, S_2nd, S_3rd, S_4th, S_5th, S_6th;

public:
    void InputStudentExamDetails()
    {
        cout << "Enter Student ID  : ";
        cin >> StudentID;
        fflush(stdin);
        cout << "Enter Student Name: ";
        getline(cin, StudentName);
        cout << "\n-:Enter Subject marks:- \n";
        cout << "1st subject marks: ";
        cin >> S_1st;
        cout << "2nd subject marks: ";
        cin >> S_2nd;
        cout << "3rd subject marks: ";
        cin >> S_3rd;
        cout << "4th subject marks: ";
        cin >> S_4th;
        cout << "5th subject marks: ";
        cin >> S_5th;
        cout << "6th subject marks: ";
        cin >> S_6th;
        cout << "\n----------------------------\n";
    }
};
class StudentResult : public StudentExam
{
private:
    float PercentageMarks;
    void CalculatePercentageMarks()
    {
        PercentageMarks = (S_1st + S_2nd + S_3rd + S_4th + S_5th + S_6th) / 6;
    }

public:
    void Display()
    {
        CalculatePercentageMarks();
        cout << "Marks of 1st subject: " << S_1st << endl;
        cout << "Marks of 2nd subject: " << S_2nd << endl;
        cout << "Marks of 3rd subject: " << S_3rd << endl;
        cout << "Marks of 4th subject: " << S_4th << endl;
        cout << "Marks of 5th subject: " << S_5th << endl;
        cout << "Marks of 6th subject: " << S_6th << endl;
        cout << "-------------------------------\n";
        cout << "Total percentage      : " << PercentageMarks << endl;
    }
};
int main()
{
    int N, i;
    cout << "How many studentExam details you want to enter:   ";
    cin >> N;
    StudentResult St[N];
    for (i = 0; i < N; i++)
        St[i].InputStudentExamDetails();
    for (i = 0; i < N; i++)
        St[i].Display();
    return 0;
}
