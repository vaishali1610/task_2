#include<iostream>
using namespace std;

void receive_account(){
 int days;
 char review;
 cout<<"Enter days"<<endl;
 cin>>days;
 if(days==7)
    cout<<"money transferred to receiver"<<endl;
else{
while(true){
    cout<<"have you sent the review y/n?"<<endl;
cin>>review;
if(review=='y') break;
}
cout<<"Is it authorized y/n?"<<endl;
cin>>review;
if(review=='n') cout<<"Invalid transaction"<<endl;
else cout<<"Transaction completed"<<endl; 
}
}

int main(){
    char card;
    long long int acc;
    cout<<"Do you have card?\n";
    cin>>card;
    if(card=='y'){
        while(true){
        cout<<"Insert bank card"<<endl;
        cout<<"Have you inserted properly?"<<endl;
        cin>>card;
        if(card=='y') break;
    }
}
    else{
        while(true){
            int ct=0;
        cout<<"Enter bank account number"<<endl;
        cin>>acc;
        if(acc==0) ct=1;
        else{
           if(acc<0)acc=-acc;
            while(acc!=0){
            acc/=10;
            ct++;
        }
        }
        if(ct>14) cout<<"Invalid"<<endl;
        else break;
        }
    }
    receive_account();
}



