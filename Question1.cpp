#include<iostream>
using namespace std;
class Book
{
    char N[100];
    char A[100];
    char P[100];
    int n,p,t,ci,id; 
    public:
        void getdata();
        void availability();
        void return();
        void display();
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
       cout<<"Enter the book no.";
        cin>>n;
        if(is<tc)
        {
            cout<<"Book is available";
        }
        else
        {
            cout<<"Book not available";
        }
}
void Book :: return()
{
    cout<<"Enter the book no. and your id";
    cin>>n>>id;
    cout<<"Book returned";
}
void Book :: display()
{
    cout<<"\nBook Name"<<N;
    cout<<"\nAuthor Name"<<A;
    cout<<"\nPublisher Name"<<P;
    cout<<"\nBook no."<<n<<"\nBook Price"<<n<<"\nTotal no. of copies available"<<tc<<"\nCopies issued"<<ci;
    
}
int main()
{   
    Book 
}

       
        
    
     
