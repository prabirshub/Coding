#include<iostream>
using namespace std;
int main(){
  int x;
  cout<<"Enter a number: ";
  cin>>x;
  if(x % 5==0){
    cout<<"Divisible by 5";
  } else {
    cout<<"Not divisible";
  }
  return 0;
}