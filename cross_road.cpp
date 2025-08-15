#include<iostream>
using namespace std;
void traffic(){
    char light;
    string color;
    bool car=true;
    cout<<"Is there any traffic light? y/n"<<endl;
    cin>>light;
    while(true){
        cout<<"Enter color"<<endl;
        cin>>color;
        if(color=="red"){
            while(true){
                cout<<"Look left \nis there any car approaching 0/1?\n";
                cin>>car;
                if(car==false) {
                    cout<<"Cross traffic"<<endl;
                    break;
                }
            }
            break;
        }
    }


}
int main(){
    char bridge, tunnel,cross;
   while(true){
    cout<<"Have you found the bridge y/n?"<<endl;
    cin>>bridge;
    if(tolower(bridge)=='y') {
        cout<<"use the bridge"<<endl;
        break;
    }
    cout<<"have you found tunnel y/n?"<<endl;
    cin>>tunnel;
    if(tolower(tunnel)=='y') {
        cout<<"use the tunnel"<<endl;
        break;
    }
    cout<<"have you found the crossing y/n?"<<endl;
    cin>>cross;
    if(tolower(cross)=='y') 
        break;
    else cout<<"walk away"<<endl;
   }
   traffic();
    
}