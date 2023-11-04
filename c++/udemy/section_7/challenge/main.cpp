#include<iostream>
#include<vector>
using namespace std;

int main(){ 
  vector <int> vector1{}, vector2{};


  
  vector1.push_back(10);  
  vector1.push_back(20);

  cout<<"\nVector1: "<<endl;
  cout<<vector1.at(0)<<endl;
  cout<<vector1.at(1)<<endl;
  cout<<"Size of vector1 "<<vector1.size()<<" elements"<<endl;
  cout<<endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout<<"\nVector2 has following values: "<<endl;
  cout<<vector2.at(0)<<endl;
  cout<<vector2.at(1)<<endl;
  cout<<"Size of vector2 "<<vector2.size()<<" elements"<<endl;

  vector <vector<int>> vector_2d;

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  vector1.at(0)=1000;

  cout<<"\n Vector2_d:"<<endl; 
  cout<<vector_2d.at(0).at(0)<<endl;
  cout<<vector_2d.at(0).at(1)<<endl;

  cout<<vector_2d.at(1).at(0)<<endl;
  cout<<vector_2d.at(1).at(1)<<endl;



  cout<<"\nVector1: "<<endl;
  cout<<vector1.at(0)<<endl;
  cout<<vector1.at(1)<<endl;
  cout<<"Size of vector1 "<<vector1.size()<<" elements"<<endl;
  cout<<endl;
  return 0;
} 