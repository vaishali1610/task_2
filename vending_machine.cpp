#include<iostream>
using namespace std;
void coffee(bool power){
     int choice;
     bool off;
    cout<< "Enter Coffee number"<<endl;
    cin>> choice;
  switch(choice){
    case 1:
        cout<<"Add choco powder"<<endl;
    case 2:
        cout << "Add frothed milk"<<endl;
    case 3: 
        cout<< "Add hot chocolate"<<endl;
        break;
    default:
      cout<<"Option not available"<<endl;
}
      cout<<"Do you want to turn off";
      cin>>off;
      if(off) coffee(off);
  

}
int main(){
    bool power = true;
        coffee(power);
}