#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter side of square: ";
  cin>>n;
  for (int i = 1; i <= n; i++)
  {
    for(int j=1; j<=i; j++){
      cout<<n -(j-1)<<" ";      
    }
      cout<<endl;
    }
  }
