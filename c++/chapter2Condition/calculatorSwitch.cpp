#include <iostream>
using namespace std;
int main(){
  int x, y;
  char ch;
  cin>>x;
  cin>>ch;
  cin>>y;
  switch(ch) {
    case '+':
      cout<<x+y;
      break;
    case '-' :
      cout<<x-y;
      break;
    case '*':
      cout<<x*y;
      break;
    case '/':
      cout<<x/y;
      break;
    default:
      cout<<"Invalid operator";
  }
}