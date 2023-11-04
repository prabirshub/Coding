#include<iostream>
#include<vector>
using namespace std;
int main(){ 
  vector <int> test_scores {100, 98, 99, 87, 93};
  cout<<"\nFirst score in index 0 is: "<<test_scores.at(0)<<endl; 
  cout<<"Second score in index 1 is: "<<test_scores.at(1)<<endl; 
  cout<<"Third score in index 2 is: "<<test_scores.at(2)<<endl;
  cout<<"Fourth score in index 3 is: "<<test_scores.at(3)<<endl;
  cout<<"Fifth score in index 4 is: "<<test_scores.at(4)<<endl;
  return 0;
}