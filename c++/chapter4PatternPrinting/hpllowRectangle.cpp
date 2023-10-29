#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a number: ";
  cin>>n;
  int mid=n/2+1;
  for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
      if(i==1 || j==1 || i==n ||j==n){
      cout<<"* ";
      } else {
        cout<<"  ";
      }
  }
    cout<<endl;
}
}