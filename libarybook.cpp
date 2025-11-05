#include<iostream>
using namespace std;
class Book{
    private:
    char ISBNO[50],BookName[50],Author[50];
    int pages,Accno;
    float price;
    public:
    void  details(){
        cout<<"Enter BookName:";
        cin>>BookName;
        cout<<"Enter Name of the Author:";
        cin>>Author;
        cout<<"Enter NUmber of pages:";
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
        cout<<"price:"<<price<<endl;
    }
};
int main(){
int n;
cout<<"Enter the number of book in the libary :";
cin>>n;
Book libary[n];
cout<<"\nEnter libary Book details";
for(int i=0;i<n;i++){
cout<<"\nBook"<<i+1<<":\n";
libary[i].details();
}
cout<<"\n libary Book Records\n";
for(int i=0;i<n;i++){
    cout<<"\nBook"<<i++<<"Information:";
    libary[i].displaydetails();
}
return 0;
}