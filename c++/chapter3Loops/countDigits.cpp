#include <iostream>
using namespace std;
int main(){
  int n;
  int count = 0;
  cout<<"Enter a number: ";
  cin>>n;
  // or (n!=0)
  while(n > 0){
    n=n/10;
    count++;
  }
  cout<<"No of digits: "<<count;
}