#include<iostream>
using namespace std;
int main(){
  int a[] = { 2,5,6,7,9,4,5};
  int n = sizeof(a)/sizeof(a[0]);
  cout<<"Orginal array : ";
  for(int i=0; i < n; i++){
    cout<<a[i]<<" ";
  }
  int start = 0;
  int end = n-1;
      while( start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
     }
  cout<<endl;
  cout<<"Reversed array: ";
  for(int i=0; i<n; i++){
    cout<<a[i]<<" ";
  }

  }
