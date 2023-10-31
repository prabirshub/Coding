#include<iostream>
using namespace std;
//method 1
// int main(){
//   int arr[]={9,5,6,9,3};
//   int n = sizeof(arr)/4;
//   int mn= arr[0];
//   for (int i = 1; i < n; i++)
//   {
//     mn = min(mn,arr[i]);
//   }
//   cout<<mn<<endl;
// }



//method 2
int main(){
  int arr[]={5,5,6,9,2,23,53,7,92};
  int n = sizeof(arr)/4;
  int mn= arr[0];
  for (int i = 1; i < n; i++)
  {
    if(arr[i]<mn) mn=arr[i];
  }
  cout<<mn<<endl;
}