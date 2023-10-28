#include <iostream>
using namespace std;
int main(){
  float x, y;
  char ch;
  cin>>x;
  cin>>ch;
  cin>>y;
if (ch == '+'){
  cout<<x+y;
}  else if (ch == '-'){
  cout<<x-y;
} else if(ch == '*'){
  cout<<x*y;
} else if( ch=='/') {
  cout<<x/y;
} else {
  cout<<"Not a valid operator";
}
}