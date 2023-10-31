#include<iostream>
using namespace std;
// //method 1
// int main(){
//   int arr[]={1,5,6,9,3}; 
//   int n = sizeof(arr)/4;  
//   int mx= arr[0];  
//   for (int i = 1; i < n; i++)
//   {
//     mx = max(mx,arr[i]);
//   }
//   cout<<mx<<endl;
// }



//method 2
int main(){
  int arr[]={1,5,6,9,3,23,53,7,92};
  int n = sizeof(arr)/4;
  int mx= arr[0];
  for (int i = 1; i < n; i++)
  {
    if(arr[i]>mx) mx=arr[i];
  }
  cout<<mx<<endl;
}