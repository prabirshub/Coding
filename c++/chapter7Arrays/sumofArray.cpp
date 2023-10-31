#include<iostream>
using namespace std;
int main(){
  int arr[]={2,5,7,9,3, 12, 13}; //26
  int n = sizeof(arr)/4;
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum +=arr[i];    
  }
  cout<<"sum of array is : "<<sum<<endl;
  
}