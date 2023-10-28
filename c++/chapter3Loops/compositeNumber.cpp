#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter nth term: ";
cin>>n;
  for(int i=2; i<=n/2; i++){
     if(n%i==0) 
    cout<<"Composite Number"<<" ";
    break;
  }
}
