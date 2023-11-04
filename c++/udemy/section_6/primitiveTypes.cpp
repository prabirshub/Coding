#include<iostream>
using namespace std;

int main(){
  int countries_represented{65};
  cout<<"Thre were "<<countries_represented<<" countries represented in my meeting" <<endl;

  long people_in_florida{20610000};
  cout<<"Thre are about "<<people_in_florida<<" people in florida" <<endl;
  
  long long people_in_earth{7'600'000'000};
  cout<<"Thre are about "<<people_in_earth<<" people in earth" <<endl;

  long long distance_to_alpha{9461000000000};
  cout<<"The distance to alpha centuri is "<<distance_to_alpha<<" kilometers" <<endl;


  /**********************************
  Floating point types
  ***********************************/

  float car_payment{401.23};
  cout<<"My car payment is "<<car_payment<<endl;

  double pi{3.14159};
  cout<<"Pi is "<<pi<<endl;

  long double large_amount{2.7e120};
  cout<<"This is "<<large_amount<<" is a very big number"<<endl;

  /**********************************
 * Boolean type
  ***********************************/

 bool game_over {false};
 cout<<"The value of gameOver is "<<game_over<<endl;

  /**********************************
 * Overflow example
  ***********************************/

short value1 {30000};
short value2 {1000};
short product {value1 * value2};

cout<<"The product of"<<value1<<" and "<<value2<<" is "<<product<<endl;


  return 0;
}