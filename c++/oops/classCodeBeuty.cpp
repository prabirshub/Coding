#include<iostream>
#include<list>
using namespace std;
class YouTubeChannel{
public:
 string Name;
 string OwnerName;
 int SubscribersCount;
 list<string> PublishedVideoTitles;
};



int main(){
  YouTubeChannel ytChannel;
  ytChannel.Name = "CodeBeuty";
  ytChannel.OwnerName = "saldina";
  ytChannel.SubscribersCount = 1800;
  ytChannel.PublishedVideoTitles = {"C++ for beginners Video 1", "HTML & CSS Video 1", "C++ OOP Video 1"};

  cout<<"Name: "<<ytChannel.Name<<endl;
  cout<<"OwnerName: "<<ytChannel.OwnerName<<endl;
  cout<<"Subs"<<ytChannel.SubscribersCount<<endl;
  cout<<"Videos: "<<endl;
 for(string videoTitle: ytChannel.PublishedVideoTitles){
  cout<<videoTitle<<endl;
 }






  return 0;
}