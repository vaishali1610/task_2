#include<iostream>
using namespace std;
int main(){
    int count=0;
    char auth;
   while(true){
    cout<<"Enter login details\nAre you authorized y/n?";
    cin>>auth;
        if(auth=='y'){
            cout<<"Granted access";
            break;
        }
        else {
            count++;
            if(count>=5)
            {
                cout<<"Account blocked/n user alerted";
            break;
            }
        }
    
   }
   

}