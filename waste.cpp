#include<iostream>
using namespace std;
void reusable(){
    char reuse;
    cout<<"Is it reusable y/n?\n";
    cin>>reuse;
    if(tolower(reuse)=='y')
    cout<<"Reuse for other applications\n";
    else{
        cout<<"Is it recyclable y/n?\n";
        cin>>reuse;
    if(tolower(reuse)=='y')
    cout<<"Recycle for other applications\n";
    else
    cout<<"Landfill\n";
    }
}

void organic(){
    char org;
    cout<<"Is organic y/n?\n";
    cin>>org;
    if(tolower(org)=='y'){
        cout<<"Is it high energy y/n?\n";
        cin>>org;
        if(tolower(org)=='y')
        cout<<"Bio fuel\n";
        else
        cout<<"Organic fertilizer\n";
    }
    else reusable();
}

int main(){
    cout<<"Get waste\n";
    organic();
}