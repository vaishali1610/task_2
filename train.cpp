#include<iostream>
using namespace std;
void ticket(){
    char reserve;
    cout<<"Buy ticket\nNeed seat reservation y/n?"<<endl;
    cin>>reserve;
    if(tolower(reserve)=='y') cout<<"select seat\n";
    else{
        cout<<"Do you want reservation y/n?";
        cin>>reserve;
        if(tolower(reserve)=='y') cout<<"Select seat\n";
        else cout<<"Thanks for using";
        exit(0);
    }
}
void collect_ticket(){
    char ticket;
    cout<<"How do you want to collect your ticket?\nmail-m or ticket machine-t?"<<endl;
    cin>>ticket;
    if(tolower(ticket)=='y')cout<<"Check letter box in 3 days"<<endl;
    else cout<<"Collect from ticket machine\n board plane"<<endl;
}
void reservation(){
    char res;
    cout<<"Do you have reservation y/n?"<<endl;
    cin>>res;
    if(tolower(res)=='y') cout<<"Look for the assigned seat"<<endl;
    else cout<<"Look for unassigned seat"<<endl;
    cout<<"Ticket checked by inspector"<<endl;
}
void destination(){
    char discount;
    cout<<"Is it a discounted ticket y/n?"<<endl;
    cin>>discount;
    if(tolower(discount)=='y') cout<<"Show valid documentation"<<endl;
    while(true){
    cout<<"Have you arrived at destination y/n?"<<endl;
    cin>>discount;
    if(tolower(discount)=='y'){
        cout<<"Leave train";
        break;
    }
    }
}

int main(){
    ticket();
    collect_ticket();
    reservation();
    destination();
}