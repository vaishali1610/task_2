#include<iostream>
using namespace std;
void findUmbrella(){
    int flag=0;
    bool umbrella;
    while(flag<5){
        cout<<"Search for umbrella"<<endl;
        cout<<"have you found the umbrella?"<<endl;
        cin>>umbrella;
        if(umbrella) {
            cout<<"Found umbrella"<<endl;
            break;
        }
        else flag++;
    }
    if(flag==5)cout<<"Buy a new umbrella"<<endl;

}
int main(){
    bool rain;
    cin>>rain;
    if(!rain) cout<<"No need of umbrella"<<endl;
    cout<<"Do you have a raincoat?"<<endl;
    cin>>rain;
    if(rain) cout<<"No need of umbrella"<<endl;
    else findUmbrella();
}