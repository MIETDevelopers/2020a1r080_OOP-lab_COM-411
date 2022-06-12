//To update the details of a course using a roll no using a member function of course class.
#include<iostream>
using namespace std;
class StudentCourse
{
    char name[50],dept[50];
    int cID , duration;
    public:
    void get()
    {
        cout <<"Enter Name: ";
        cin>>name; 
        cout <<"Enter ID ";
        cin>>cID;
        cout<<"Enter Department: ";
        cin>>dept;
        cout<<"Enter Course Duration (In months): ";
        cin>>duration;
    }
    void print()
    {
        cout<<"Course Name: "<<name<<endl;
        cout<<"Course Id: "<<cID<<endl;
        cout<<"Department: "<<dept<<endl;
        cout<<"Course Duration (In months): "<<duration<<endl;
    }
    int ID()
    {
        return cID;
    } 
    void update()
    {
        cout <<"\nEnter Name: ";
        cin>>name; 
        cout <<"Enter Couse ID: ";
        cin>>cID;
        cout<<"Enter Department: ";
        cin>>dept;
        cout<<"Enter Duration: ";
        cin>>duration;   
    }
};
int main()
{
    int i,n,x;
    cout<<"Enter the number of Courses: ";
    cin>>n;
    StudentCourse sc[n];
    for (i = 0; i < n; i++)
    {
        cout<<"\nEnter details of course "<<i+1<<endl;
        sc[i].get();
    }
    cout<<"\nEnter the Course ID of the course whose data you want to Update: ";
    cin>>x;
    for (i = 0; i < n; i++)
    {
        if (sc[i].ID() == x)
            {
                cout<<"\nDetails of Course ID "<<x<<" before updation is: "<<endl;
                sc[i].print();
                sc[i].update();
                cout<<"\nDetails of Course ID "<<x<<" after updation is: "<<endl;
                sc[i].print();
            }
    }
    return 0;
}