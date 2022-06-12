//To add the details of a course using a parameterized constructor of a course class.
#include<iostream>
using namespace std;
class course
{
    int cId;
    string cName;
    public:
    course(int i,string n)
    {
        cId=i;
        cName=n;
    }
    void display()
    {
        cout<<"Course Id: "<<cId<<endl;
        cout<<"Course Name: "<<cName<<endl;
    }
};
int main()
{
    course c(401,"C++ using OOP");
    c.display();
}