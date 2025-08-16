#include<iostream>
#include<thread>
using namespace std;
void priority_boarding(){
char first,half;
  cout<<"Start priority boarding"<<endl;
  cout<<"First class y/n?"<<endl;
  cin>>first;
  if(tolower(first)=='y') cout<<"board plane\n";
  else {
cout<<"Half 1st class board?\n";
cin>>half;
if(tolower(half=='y')) cout<<"All passengers board plane\n";
else priority_boarding();
  }
}
void time(){
    char gate;
    cout<<"5 minutes before gate closes\n";
    cout<<"All passengers aboard y/n?"<<endl;
    cin>>gate;
    if(tolower(gate)=='y')cout<<"Close gate\n";
    else{
        cout<<"Gate closes after 5 minutes"
        this_thread::sleep_for(chrono::minutes(5));
        cout<<"Closed gate\n";
    }

}

int main(){
    cout<<"Plane arrived at gate"<<endl;
    priority_boarding();
    time();
    
}