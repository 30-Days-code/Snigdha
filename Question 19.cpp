#include<iostream>
using namespace std;
int main(){
  int A[5]={3,4,5,6,7},d,f;
  cout<<"Enter the element to be deleted";
  cin>>d;
  for(int i=0;i<5;i++){
    if(d==A[i]){
      cout<<"Found";
      return 0;
    }
    else{
      cout<<Not Found";
    }
  }
  return 0;
}
  
    
   
