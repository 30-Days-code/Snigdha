#include<iostream>
using namespace std;
class Book
{
    char N[100];
    char A[100];
    char P[100];
    int n,p,t,ci; 
    public:
        void getdata();
        void availability();
        void return();
        void display
};
void Book :: getdata()
{
    cout<<"Enter the name of the Book and Author name";
    cin>>N>>A;
    cout<<"Enter the name of publisher";
    cin>>P;
    cout<<"Enter the price and book no.";
    cin>>p>>n;
    cout<<"Enter the no. of total copies and issued copies";
    cin>>tc>>ci;
}
void Book :: availability()
{
    
     
