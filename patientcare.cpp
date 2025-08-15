#include<iostream>
using namespace std;
void doctor();
void checkup();
void registration(){
bool reg, nurse=true;
cout<<"have you registered already? 0/1"<<endl;
cin>>reg;
if(!reg) {
    cout<<"Please make Registration"<<endl;
    registration();
}
else{
if(!nurse) cout<<"Wait for nurse"<<endl;
else{
    cout<<"Recording health details"<<endl;
    doctor();
}
}
}

void doctor(){
   bool doc=true;
   if(!doc) cout<<"Doctor not available, please wait"<<endl;
   else{
    cout<<"Assigning to doctor"<<endl;
    checkup();
   }
}
void checkup(){
    char sc,follow, med;
    cout<<"Do you need scans? y/n"<<endl;
    cin>>sc;
    if(sc=='y' || sc=='Y') cout<<"Taking patient to lab"<<endl;
    cout<<"Need follow up?"<<endl;
    cin>>follow;
    if(follow == 'y' || follow=='Y') cout<<"Make appointment"<<endl;
    cout<<"Need medicine y/n?"<<endl;
    cin>>med;
    if(med=='y') cout<<"Give prescription"<<endl;
    cout<<"Patient has left";
}

int main(){
    bool emergency;
    cout<<"Patient arrived"<<endl;
    cout<<"Is it an emergency case? 0/1"<<endl;
    cin>>emergency;
    if(!emergency) registration();
    else doctor();

}