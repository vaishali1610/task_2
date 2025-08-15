#include<iostream>
#include<thread>
using namespace std;
void alarm(){
    char ready;
    cout<<"Ready to wake up y/n?"<<endl;
    cin>>ready;
    if(tolower(ready)=='y')
    cout<<"Leave bed"<<endl;
    else{
        cout<<"Will you be late? y/n"<<endl;
        if(tolower(ready)=='y')
        cout<<"Leave bed"<<endl;
        else{
            cout<<"Snooze for 5 minutes"<<endl;
            this_thread::sleep_for(chrono::seconds(5));
            alarm();
        }
    }
}
int main(){
    char alarm_set;
    cout<<"Have you set the alarm y/n?"<<endl;
    cin>>alarm_set;
    if(tolower(alarm_set)=='n') cout<<"Sleep well"<<endl;
    else alarm();
}