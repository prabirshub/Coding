#include<iostream>
using namespace std;
int main(){
  int arr[] = { 2,5,6,7,9,4,5};
  int n = sizeof(arr)/sizeof(arr[0]);
  int mx = INT_MIN;
  for(int i = 0; i<n; i++){
    mx = max (mx,arr[i]);
  }
  int smx = INT_MIN;
  for(int i = 0; i<n; i++){
    if(arr[i]!= mx) {
      smx = max(smx,arr[i]);
    }
  }
  cout<<smx<<endl;
}