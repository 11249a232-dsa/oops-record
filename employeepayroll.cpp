#include<iostream>
using namespace std;
class Salaryslip{
    private:
    int empID;
    char name[50];
    float basic,hra,da,pf,gross,net;
    public:
    void getData(){
        cout<<"Enter Employee ID:";
        cin>>empID;
        cout<<"Enter Employee name:";
        cin>>name;
        cout<<"Enter Basic Salary:";
        cin>>basic;
    }
    void calculation(){
        hra = basic*0.20;
    da = basic*0.10;
    pf = basic*0.08;
    gross = basic+hra+da;
    net=gross-pf;
    }
    void display(){
        cout<<"Employe ID:"<<empID<<endl;
        cout<<"Employee name:"<<name<<endl;
        cout<<"Basic salary:"<<basic<<endl;
        cout<<"HRA(20%):"<<hra<<endl;
        cout<<"DA(10%):"<<da<<endl;
        cout<<"PF(8%):"<<pf<<endl;
        cout<<"Gross salary:"<<gross<<endl;
        cout<<"Net salary:"<<net<<endl;
        cout<<"-------------\n";
    }
};
int main(){
    Salaryslip emp;
    emp.getData();
    emp.calculation();
    emp.display();
    return 0;
}