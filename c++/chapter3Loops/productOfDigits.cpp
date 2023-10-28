#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  int ld =1;
  int product = 1;
  while(n!=0){
    ld = n%10;
    n /=10;
    product *= ld;
  }
  cout<<product;
}