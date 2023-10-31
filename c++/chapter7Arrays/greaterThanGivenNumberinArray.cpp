#include<iostream>
using namespace std;
int main(){
  int arr[]={2,5,7,9,3, 12, 13}; 
  int n = sizeof(arr)/sizeof(arr[0]);
  int x = 5;
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]>5) {
      count ++;
      }
  }
  cout<<count<<endl;
}