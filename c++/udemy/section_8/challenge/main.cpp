#include<iostream>
using namespace std;

int main(){


  const int dollar_vallue{100};
  const int quarter_vallue{25};
  const int dime_vallue{10};
  const int nickel_vallue{5};

  int change__amount{0};

cout<<"\nEnter an amount in cents: ";
cin>>change__amount;

int balance{}, dollar{}, quarters{}, dime{}, nickel{}, pennies{};

dollar = change__amount/dollar_vallue;
balance = change__amount - (dollar * dollar_vallue);

quarters = balance / quarter_vallue;
balance -= quarters * quarter_vallue;

dime = balance/dime_vallue;
balance -= dime * dime_vallue;

nickel = balance /nickel_vallue;
balance -= nickel * nickel_vallue;

pennies= balance;

  cout<<"\nYou can provide this change as follows:"<<endl;
  cout<<"dollar   : "<<dollar<<endl;
  cout<<"quarters : "<<quarters<<endl;
  cout<<"dimes    : "<<dime<<endl;
  cout<<"nickels  : "<<nickel<<endl;
  cout<<"pennies  : "<<pennies<<endl;
  cout<<endl;


}