#include <iostream>
using namespace std;
void warehouse();
void items(); 

void items(){
    char ch;
    cout<<"Is all items are present?\n";
    cin>>ch;
    if(tolower(ch=='y')){
        cout<<"Sent warehouse goods to customer\n";
        cout<<"Customer collects goods\n";
        cout<<"Seller confirms that customer received order\n";
    }
    else warehouse();
}

void warehouse(){
    char ch;
    cout<<"Items are found in warehouse?\n";
    cin>>ch;
    if(ch=='y') cout<<"Packed with other orders\n";
    else if(ch=='n')
        cout<<"Contact seller to ship good\n";
    cout<<"Seller send good to customer\n";
}
 
 
int main(){
    cout<<"Online order has been placed\n";
    items();
}