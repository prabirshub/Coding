#include <iostream>
using namespace std;
int main(){
  int n;
  int rev = 0, ld = 0; 
  cout<<"Enter a number: ";
  cin>>n;
  // or (n!=0)
  while(n != 0){
    ld=n%10;    
    rev *=10;
    rev += ld;
    n /=10; //n=n/10
  }
  cout<<"Reverse digits: "<<rev;
}