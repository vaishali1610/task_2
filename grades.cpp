#include<iostream>
using namespace std;
void grade(int m){
if(m<0||m>100) cout<<"Invalid marks";
else if(m>=80) cout <<"A";
else if(m>=60) cout<<"B";
else if(m>=50) cout<<"C";
else cout<<"Fail";
}
int main(){
    char present;
    int marks;
    cout<<"Were you present for the exam?y/n"<<endl;
    cin>>present;
    if(present=='n') cout<<"No marks"<<endl;
    else{
cout<<"Enter marks"<<endl;
cin>>marks;
grade(marks);
    }

}