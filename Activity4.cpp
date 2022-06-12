//To search student details by roll no. using a member function of student class.
//To get the results of students by roll no. using a member function of student class.
#include <iostream>
using namespace std;

int n;

class student
{
private:
    int rollno;
    string name;
    float marks;

public:
    void getdata();
    void putdata();
    friend void search_stu(student s[], int roll);
    friend void get_result(student s[], int roll);
};

void search_stu(student s[], int roll)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s[i].rollno == roll)
        {
            s[i].putdata();
            break;
        }
    }
    if (i == n)
        cout << "Student not found";
}
void get_result(student s[], int roll)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s[i].rollno == roll)
        {
            if (s[i].marks >= 40)
            {
                cout << "Passed";
            }
            else
            {
                cout << "Failed";
            }
        }
    }
}
void student ::getdata()
{
    cout << "Enter the rollno:";
    cin >> rollno;
    cout << "Enter the name:";
    cin >> name;
    cout << "Enter the marks:";
    cin >> marks;
}

void student ::putdata()
{
    cout << "Rollno:" << rollno << endl;
    cout << "Name:" << name << endl;
    cout << "Marks:" << marks << endl;
}

int main()
{
    int roll;
    cout << "Enter the no of student you want to input:";
    cin >> n;
    student s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getdata();
    }

    cout << "Enter the rollno to search:";
    cin >> roll;
    search_stu(s, roll);
    get_result(s, roll);

    return 0;
}