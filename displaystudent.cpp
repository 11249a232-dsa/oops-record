#include<iostream>
using namespace std;
class student{
    private:
    string name ;
    int rollno;
    float marks;
    public:
    void  getdetails(){
        cout<<"Enter student name:";
        cin>>name;
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"Enter marks:";
        cin>>marks;
    }
    void displaydetails(){
        cout<<"\nStudent Information"<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"Rollno:"<<rollno<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
        int main(){
         student s;
         s.getdetails();
         s.displaydetails();
         return 0;
    }