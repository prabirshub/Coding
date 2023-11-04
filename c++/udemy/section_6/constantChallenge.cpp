/*
Frank carpet cleaning service
Charges: 
    $25 per small room
    $35 per large room
Sales tax rate is 6%
Estimates are valid for 30 days 

  Promt the user for the number  they would like cleared
  and provide an estimate such as:

Estimate for carpet cleaning service:
Number of rooms: 2 
Price per rooms: $30
Cost: $60
Tax: $3.6
================================
Total estimate: $63.6
This estimate is valid for 30 days


Pseudocode
  Prompt the user to enter the number of rooms
  Display number of rooms
  Display price per room

  Display cost. (number or rooms * price per rooms)
  Display tax. (number or rooms * price per rooms * tax rate)
  Display total estimate (number or rooms * price per rooms) + (number or rooms * price per rooms * tax rate)
  Display estimate expiration time
*/

#include<iostream>
using namespace std;

int main(){
cout<<"Hello! Welcome to Frank carpet cleaning service"<<endl;
cout<<"\nHow many small rooms would you like cleaned? ";

int no_of_small_rooms{0};
cin>>no_of_small_rooms;
cout<<"\nHow many large rooms would you like cleaned? ";

int no_of_large_rooms{0};
cin>>no_of_large_rooms;

const double price_per_small_room{25}; //price
const double price_per_large_room{35}; //price
const double sales_tax{0.06};
const int estimate_expiry{30}; //days

cout<<"\nEstimate for carpet cleaning service"<<endl;
cout<<"Number of small rooms: "<<no_of_small_rooms<<endl;
cout<<"Number of large rooms: "<<no_of_large_rooms<<endl;
cout<<"Price per small room: $"<<price_per_small_room<<endl;
cout<<"Price per large room: $"<<price_per_large_room<<endl;
cout<<"Cost: $"<<(price_per_small_room*no_of_small_rooms)+(price_per_large_room*no_of_large_rooms)<<endl;
cout<<"Tax: $"<<((price_per_small_room*no_of_small_rooms)+(price_per_large_room*no_of_large_rooms))*sales_tax<<endl;
cout<<"======================================"<<endl;
cout<<"Total estimate: $"<<(price_per_small_room*no_of_small_rooms)+(price_per_large_room*no_of_large_rooms)+((price_per_small_room*no_of_small_rooms)+(price_per_large_room*no_of_large_rooms))*sales_tax<<endl;
cout<<"This estimate is valid for "<<estimate_expiry<<" days"<<endl;
cout<<"======================================"<<endl;
cout<<endl;
}