#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter side: ";
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    for(int j=1; j<=n-i; j++){
      cout<<"  ";
    }
    for(int j=1; j<=i; j++){ // stars loop
      cout<<j<<" ";
    }
    cout<<endl;
  }
  
}