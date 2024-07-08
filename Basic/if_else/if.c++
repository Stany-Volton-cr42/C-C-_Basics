#include <iostream>
using namespace std;

int main(){
    int saving;
    cin >> saving;

    if (saving > 5000){
        if (saving > 10000){
            cout << "Roadtrip with neha";
        }else{
            cout << "Shoping with Neha";
        }
        cout << "Neha \n";
    } else if(saving > 2000){
        cout << "Rashmi\n";
    } else {
        cout << "friends";
    }
    return 0;
}