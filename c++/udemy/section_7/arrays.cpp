#include<iostream>
using namespace std;

int main(){
  char vowels[] {'a', 'e', 'i','o', 'u'};
  cout<<"\nThe first vowel is: "<<vowels[0]<<endl;
  cout<<"The last vowel is: "<<vowels[4]<<endl;
  // cin>>vowels[5]; //out of bounds - don't do this
  // cout<<"The new vowel is: "<<vowels[5]<<endl;

 double hi_temps[] {90.1, 89.8, 77.5, 81.6};
  cout<<"\nThe first high temp is: "<<hi_temps[0]<<endl;
  hi_temps[0]=100.7;
  cout<<"The first high temp is now: "<<hi_temps[0]<<endl;


  int test_score[5]{100, 90, 80, 70, 60};
  cout<<"\nFirst score in index 0 is: "<<test_score[0]<<endl; //junk
  cout<<"Second score in index 1 is: "<<test_score[1]<<endl; //junk
  cout<<"Third score in index 2 is: "<<test_score[2]<<endl;
  cout<<"Fourth score in index 3 is: "<<test_score[3]<<endl;
  cout<<"Fifth score in index 4 is: "<<test_score[4]<<endl;

  cout<<"\nEnter 5 test score: ";
  cin>>test_score[0];
  cin>>test_score[1];
  cin>>test_score[2];
  cin>>test_score[3];
  cin>>test_score[4];

  cout<<"\nThe updated array is"<<endl;
  cout<<"First score in index 0 is: "<<test_score[0]<<endl; 
  cout<<"Second score in index 1 is: "<<test_score[1]<<endl; 
  cout<<"Third score in index 2 is: "<<test_score[2]<<endl;
  cout<<"Fourth score in index 3 is: "<<test_score[3]<<endl;
  cout<<"Fifth score in index 4 is: "<<test_score[4]<<endl;

  cout<<"\nNotice what the value of the array name is: "<<test_score<<endl;

  return 0;
}