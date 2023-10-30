#include<iostream>
using namespace std;
int main(){
// 5 integers -> 6,2,8,5,0
int arr[5];//declaration

cout<<"Enter array elements : ";

for(int i =0; i<=4; i++){
  cin>>arr[i];
}
for(int i =0; i<=4; i++){
  cout<<arr[i]<<" ";
}
}