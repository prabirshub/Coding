#include <iostream>
using namespace std;
int main(){
  int a, b, c;
  cout<<"Enter side1 of a triangle: ";
  cin>>a;
  cout<<"Enter side2 of a triangle: ";
  cin>>b;
  cout<<"Enter side3 of a triangle: ";
  cin>>c;
  if( (a+b)>c && (b+c)> a && (c+a)>b){
    cout<<"Valid triangle";
  } else {
    cout<<"Invalid triangle";
  }
}