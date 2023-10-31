#include<iostream>
using namespace std;
int main(){
  
  int arr[] = { 2,5,6,7,9,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int mn = INT_MAX;
  for(int i = 0; i<n; i++){
    mn = min (mn,arr[i]);
  }
  int smn = INT_MAX;
  for(int i = 0; i<n; i++){
    if(arr[i]!= mn) {
      smn = min(smn,arr[i]);
    }
  }
  cout<<smn<<endl;
}