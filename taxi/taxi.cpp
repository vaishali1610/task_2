#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
 
string name, location;
void incomingOrder() {
    cout << "\n----- Incoming Order -----\n";
    cout << "Name of the customer: ";
    cin >> name;
    cout << "Location of the customer: ";
    cin >> location;
 
    string pick;
    do {
        cout << "Time to pickup would be 30 mins or less? (yes/no): ";
        cin >> pick;
        if (pick == "no") {
            cout << "Wait for the next customer...\n";
        }
    } while (pick != "yes");
 
    fstream inc("incoming.csv", ios::out | ios::app);
    inc << name << "," << location << endl;
    inc.close();
    cout << "Order accepted.\n";
}
pair<string, string> processOrder() {
    cout << "\n Processing Order\n";
 
    fstream taxi("available.csv", ios::in);
    ofstream temp("temptaxi.csv");
 
    string line, tname, ran;
    int km;
    bool taxiFound = false;
    pair<string, string> getTaxi = {"", ""};
 
    while (getline(taxi, line)) {
        stringstream ss(line);
        getline(ss, tname, ',');
        getline(ss, ran);
        km = stoi(ran);
 
        if (!taxiFound && km <= 10) {
            cout << "Taxi " << tname << " is within " << ran << " km range.\n";
            taxiFound = true;
            getTaxi = {tname, ran};
            continue; 
        }
        temp << tname << "," << ran << endl;
    }
 
    taxi.close();
    temp.close();
    remove("available.csv");
    rename("temptaxi.csv", "available.csv");
 
    if (!taxiFound) {
        cout << "No taxi found, kindly wait...\n";
    }
    return getTaxi;
}
void taxiRide(string taxiName, string range) {
    cout << "\n----- Taxi Ride -----\n";
    if (taxiName == "") {
        cout << "Ride cannot be assigned. No taxi available.\n";
        return;
    }
 
    cout << "Passenger " << name << " is assigned to taxi: " << taxiName << endl;
 
    fstream order("history.csv", ios::out | ios::app);
    order << name << "," << taxiName << endl;
    order.close();
 
    cout << "Taxi ride completed. History updated.\n";
}
 
int main() {
    cout << " Requesting Taxi \n"; 
    incomingOrder();                              
    pair<string, string> getTaxi = processOrder(); 
    taxiRide(getTaxi.first, getTaxi.second);       

    return 0;
}
 