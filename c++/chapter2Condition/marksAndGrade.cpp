#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter marks: ";
  cin>>n;
  if(n>=81 && n<=100){
    cout<<"Very GOOD";
  } else if(n>=61){
    cout<<"GOOD";
  }else if(n>=41){
    cout<<"Average";
  } else {
    cout<<"Fail";
  }
  }
