#include<iostream>
using namespace std;

void immigration(){
    cout<<"Immigration\nBoard flight\nFlight departs\nFlight lands\n";
}

void flight(){
    char flight;
    cout<<"Leave flight\nImmigration\nDo you have permit to other country?\n";
    cin>>flight;
    if(tolower(flight)=='y') cout<<"Claim baggage";
    else cout<<"Send to originate country";
}

void screening(){
    char good;
    cout<<"Security screening\n";
    cout<<"Enter good type R-restricted articles m-metal\n";
    cin>>good;
    if(tolower(good)=='r') cout<<"Give up articles above limit"<<endl;
    else{
         cout<<"Hand search\nIs it dangeruous?"<<endl;
         cin>>good;
         if(good=='y')
         cout<<"Give up dangeruous good"<<endl;
    }
    immigration();
    cout<<"Is there any connection?\n";
    cin>>good;
    if(good=='y')
    screening();
    else {
        flight();
        return;
    }
}


int main(){
    cout<<"Checking in\n Baggage drop\n";
    screening();
}