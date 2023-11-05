#include<iostream>
using namespace std;
int main(){
  int num{};
  int min{10}, max{100};

  cout<<"\nEnter a number between "<<min <<" and " <<max <<": ";
  cin>>num;
  
  if(num>= min){
    cout<<"\n=================== if statement 1 ======================="<<endl;
    cout<<num <<" is greater than or equal to "<<min<<endl; 

    int dif = num-min;
    cout<<num<<" is "<<dif<<" greater than "<<min <<endl;
    cout<<endl;
  }

  if(num <= max){
    cout<<"\n==================== if statement 2 ======================="<<endl;
    cout<<num <<" is less than or equal to "<<max<<endl; 

    int dif = max-num;
    cout<<num<<" is "<<dif<<" less than "<<max <<endl;
    cout<<endl;
  }

  if( num>= min && num <= max){
    cout<<"\n==================== if statement 3 ======================="<<endl;
    cout<<num <<" is in the range "<<max<<endl;     
    cout<<"This means statement 1 and statement 2 must also display!!"<<endl;
    cout<<endl;
  }

  if(num == min || num == max){
 cout<<"\n==================== if statement 4 ======================="<<endl;
    cout<<num <<" is right in the boundary "<<max<<endl;     
    cout<<"This means all 4 statements must also display!!"<<endl;
    cout<<endl;
  }
}
