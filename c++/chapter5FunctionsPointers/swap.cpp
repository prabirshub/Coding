#include <iostream>
using namespace std;
// //method 1
// int main(){ 
//  int x = 2;
//  int y = 5;
//  cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
//  int temp = x;
//  x = y;
//  y = temp;
//   cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
// }

//method 2
int main(){ 
 int x = 6;
 int y = 9;
 cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
 x = x+y;
 y = x-y;
 x = x-y;
  cout<<"x:"<<x<<" "<<"y:"<<y<<endl;
}