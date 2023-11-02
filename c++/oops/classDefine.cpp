#include<iostream>
using namespace std;

class Fruit{

  public:
    string name;
    string color;


    void print_of(){
      cout<<"Name : " <<name<<endl;
      cout<<"Color : " <<color<<endl;
    }
};

int main(){

  Fruit apple, orange, mango;
  apple.name= "Apple";
  apple.color="Red";
  orange.name= "Orange";
  orange.color="orange";
  mango.name= "Mango";
  mango.color="Yellow";

  apple.print_of();
  orange.print_of();
  mango.print_of();

return 0;
}