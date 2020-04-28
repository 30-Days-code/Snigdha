#include<iostream>
using namespace std;
class Employee
{ 
    public:
        int en;
        char EN[100];
        char Ad[100];
        char D[100];
        void getdata();
        void show();
    
};
class Manager : public Employee
{
    int n;
    public:
        void set_data();
        void details();
};
void Employee :: getdata()
{
    cout<<"Enter Employee Name"
    cin>>EN;
    cout<<"Enter Employee Number";
    cin>>en;
    cout<<"Enter Address"
    cin>>Ad;
    cout<<"Enter Department";
    cin>>D;
}
void Employee :: show()
{
    cout<<"Employee Name : "<<EN;
    cout<<"Employee No.:"<<en;
    cout<<"Employee Address:"<<AD;
    cout<<"Employee Department :"<<D;
}
void Manager :: set_data()
{
    cout<<"Enter no. of employees under mananger";
    cin>>n;
}
void Manager :: details()
{
    cout<<"No. of Employees under Manager:"<<n;
}
int main()
{
   Manager M;
   M.setdata(); 
   M.show();
   M.set_data();
   M.details();
   return 0; 
  
}


    
