#include <iostream>
using namespace std;

int sum( int num1, int num2){
 return num1+num2;
}

int main(){ 
  int a, b;
  cout<<"Enter 1st number: ";
  cin>>a;
  cout<<"Enter 2nd number: ";
  cin>>b;
  cout<<sum(a,b);
   return 0;
}