#include<iostream>
using namespace std;
int main(){
  int a[] = { 2,5,6,7,9,4,5};
  int n = sizeof(a)/sizeof(a[0]);
  int b[n];
      cout<<"Orginal array : ";
      for(int i = 0; i<n; i++){
      cout<<a[i]<<" ";
      b[i]= a[n-1-i];
     }
    cout <<endl;
    cout<<"Second array  : ";
     for(int j = 0; j<n; j++){
      cout<<b[j]<<" ";
     }
     cout<<endl;
  }
