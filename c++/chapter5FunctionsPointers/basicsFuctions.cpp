#include <iostream>
using namespace std;
void greet(){
  cout<<"Good morning!"<<endl;
  cout<<"How are you ?"<<endl;
  return;
}
void india(){
  cout<<"You are in India! :)"<<endl;
  return;
}
void usa(){
  cout<<"You are in USA! :)"<<endl;
  return;  
}
int main(){ 
  cout<<"Hey there!"<<endl;
  greet();
  india();
   cout<<"Now"<<endl;
   usa();
}