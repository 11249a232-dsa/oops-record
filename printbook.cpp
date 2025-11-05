#include<iostream>
using namespace std;
class book{
    private:
    char ISBNO[50],BookName[50],Author[50];
    int pages,Accno;
    float price;
    public:
    void getdetails(){
        cout<<"Enter BookName:";
        cin>>BookName;
        cout<<"Enter ISBNO:";
        cin>>ISBNO;
        cout<<"Enter Name of the Author:";
        cin>>Author;
        cout<<"Enter number of pages:";
        cin>>pages;
        cout<<"Enter Accno:";
        cin>>Accno;
        cout<<"Enter price:";
        cin>>price;
       }
       void displaydetails(){
        cout<<"BookName:"<<BookName<<endl;
        cout<<"ISBNO:"<<ISBNO<<endl;
        cout<<"Author:"<<Author<<endl;
        cout<<"pages:"<<pages<<endl;
        cout<<"Accno:"<<Accno<<endl;
        cout<<"Price(Rs):"<<price<<endl;
       }
    };
    int main(){
    book b;
    b.getdetails();
    b.displaydetails();
    return 0;
    }
