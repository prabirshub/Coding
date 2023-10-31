#include<iostream>
using namespace std;

int main(){
  string str = "Prabir";
  cout<<"Original string: "<<str <<" Length: "<<str.length()<<endl;
  // str = str + " Singh";
  // cout<<"Modified string: "<<str <<" Length: "<<str.length()<<endl;
  str = "Singh "+ str;
  cout<<"Reversed string: "<<str <<" Length: "<<str.length()<<endl;
  }
