#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<<"Enter 1st number: ";
  cin>>a;
  cout<<"Enter 2nd number: ";
  cin>>b;
  cout<<"Enter 3rd number: ";
  cin>>c;
  if(a>b){
    if(a>c){
      cout<<a<<" is the gretest";
    } else {
      cout<<c<<" is the gretest";
    }
  } else {
    if(b>c)
    {
      cout<<b<<" is the gretest ";
    } else {
      cout<<c<<" is the gretest";
    }
  }
}