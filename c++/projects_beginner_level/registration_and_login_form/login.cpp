#include<iostream>
#include <string>
#include<fstream>
using namespace std;

class temp{
string userName, Email, password;
string searchName, searchEmail, searchPassword;
fstream file;
public:
void login();
void signUp();
void forgotPwd();
}obj;

int main(){
  char choice;
  cout<<"\n1- Login";
  cout<<"\n2- Sign-up";
  cout<<"\n3- Forgot PassWord";
  cout<<"\n4- Exit";
  cout<<"\nEnter your choice :: ";
  cin>>choice;

  switch(choice){
  case '1':
   obj.login();
    break;

  case '2':
    obj.signUp();
    break;


  case '3':
    obj.forgotPwd();
    break;


  case '4':    
    break;

 default:
  cout<<"Invalid Selection...!";
    break;
  }

  return 0;
}

void temp :: signUp(){
  cout<<"Enter Your User Name :: ";
  getline(cin, userName);
  cout<<"Enter Your Email Address :: ";
  getline(cin, Email);
  cout<<"Enter Your Password :: ";
  getline(cin, password);


  file.open("loginData.txt", ios :: out | ios :: app);
  file<<userName<<"*"<<Email<<"*"<<password<<endl;
  file.close();
}

void temp::login(){
  cout<<"-------------LOGIN-------------"<<endl;
  cout<<"Enter Your User Name :: ";
  getline(cin, searchName);
  cout<<"Enter Your Password :: ";
  getline(cin, searchPassword);

  file.open("loginData.txt", ios :: in);
  getline(file, userName,'*');
  getline(file, Email,'*');
  getline(file, password,'\n');
  while(!file.eof()){
    if(userName == searchName){
      if(password == searchPassword){
        cout<<"\nAccount Login SuccesFull...!";
        cout<<"\nEmail :: "<<Email<<endl;
      } else {
        cout<<"Icorrect Password...!";
      }
    }
  getline(file, userName,'*');
  getline(file, Email,'*');
  getline(file, password,'\n');
  }
  file.close();
}
void temp::forgotPwd(){

  cout<<"Enter Your User Name :: ";
  getline(cin, searchName);
  cout<<"Enter Your Email Address :: ";
  getline(cin, searchEmail);

  file.open("loginData.txt", ios :: in);
  getline(file, userName,'*');
  getline(file, Email,'*');
  getline(file, password,'\n');
  while(!file.eof()){
    if(userName == searchName){
      if(Email == searchEmail){
        cout<<"\nAccount found...!"<<endl;
        cout<<"Your Password :: "<<password<<endl;
      } else {
        cout<<"Email not found...!\n";
      }
    } else {
      cout<<"Username not found...!\n";
    }  
  }
  file.close();
}