#include <iostream>
using namespace std;
int main(){
  int n;
  int sum = 0, ld = 0; 
  cout<<"Enter a number: ";
  cin>>n;
  // or (n!=0)
  while(n > 0){
    ld=n%10;
    n /=10; //n=n/10
    if(ld%2==0){
      sum += ld; // sum = sum + ld
    }
  }
  cout<<"Total of digits: "<<sum;
}