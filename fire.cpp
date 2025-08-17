#include<iostream>
using namespace std;

void door(){
    cout<<"Do not open the door\nSeal all cracks with well towels\nContact fire department\nWave at doors for survivors\nWait for rescue";
}

void evacuation(){
    char doorHot, seeSmoke, escape;
    cout<<"Are doors hot or smoke seeping in y/n"<<endl;
    cin>>doorHot;
    if(tolower(doorHot)=='y') door();
    else{
        cout<<"Go downstairs until you leave the building\n Escaped the building?";
        cin>>escape;
        if(escape=='y') return;
        else{
            while(true){
                cout<<"Have you seen the fire?\n";
            cin>>escape;
            if(escape=='y'){
                 cout<<"Go upstairs and head to balcony\nReached balcony?";
                 char isreached;
                 cin>>isreached;
                 if(isreached=='y'){
                    cout << "Wait for the rescue\n";
                    break;
                 }
                
            }
            }
        }
    }
}

void smoke(){
    int num;
    char fire;
    cout<<"1.You or someone sees fire or smoke\n2.Smoke detector finds fire\n";
    cin>>num;
    if(num==1){
      cout<<"Is the fire in the building y/n?"<<endl;
      cin>>fire;
      if(fire=='n') cout<<"contact fire department\n";
      else cout<<"Push the alarm trigger";
    }
    else if(num==2) cout<<"Smoke detector triggers alarm"<<endl;
    else cout<<"Invalid option"<<endl;
    cout<<"Bring phone,keys, wallet"<<endl;
    evacuation();
}

int main(){
    smoke();
}