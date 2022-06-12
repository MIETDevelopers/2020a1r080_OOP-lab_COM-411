#include <iostream>
using namespace std;
class student
{
private:
int rollno;
string name;
float marks;

public:
student(); // default constructor
~student(); // destructor
void getdata();
void putdata();
};
class StudentCourse
{
private:
string course;
int credits;
public:
StudentCourse();
~StudentCourse();
void getdata();
void putdate();
};
StudentCourse::StudentCourse()
{
cout << "Course Details Using Constructor"<< endl;
}
student::student()
{
cout << "students details using construction"<< endl;
}
void StudentCourse ::getdata()
{
cout<<"Enter Course Name: ";
cin>> course;
cout<<"Enter Credits: ";
cin >> credits;
}
void student ::getdata()
{
cout << "Enter the rollno:";
cin >> rollno;
cout<<"Enter the name:";
cin>> name;
cout << "Enter the marks:"; cin >> marks;
}
void StudentCourse::putdate()
{
cout<<"Course Name:"<<course << endl;
cout << "Credits:"<< credits << endl;
}
void student ::putdata()
{
cout << "Rollno:" << rollno << endl;
cout << "Name:" << name << endl;
cout << "Mark:" << marks << endl;
}
student::~student()
{
cout << "Students details using destructor "<< endl;
}
StudentCourse::~StudentCourse()
{
cout << "Course Details using Destructor" << endl;
}
int main()
{
student s; 
StudentCourse sc;
cout << "COURSE DETATES" << endl;
sc.getdata();
cout << endl;
cout << "STUDENTS DETAILS" << endl; 
s.getdata(); 
cout << endl; 
sc.putdate(); 
cout << endl;
s.putdata();
cout << endl; 
return 0;
}