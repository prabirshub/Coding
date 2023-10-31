#include<iostream>
using namespace std;
int main(){
  int arr[]={2,5,7,}; //70
  int n = sizeof(arr)/4;
  int sum = 1;
  for (int i = 0; i < n; i++)
  {
    sum *=arr[i];
  }
  cout<<"Product of array is : "<<sum<<endl;
  
}