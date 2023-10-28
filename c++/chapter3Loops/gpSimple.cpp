#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter nth term: ";
cin>>n;
int a = 3;
// print 1, 2, 4, 8, 16, 32... upto n times
  for(int i=1; i<=n; i++){
     cout<<a<<" ";
     a = a * 4;
  }
}
