// simple addition of program 
#include <iostream>
using namespace std;

int main(){
    int amt1;
    cout << "Enter the frist amout ";
    cin >>amt1;

    int amt2;
    cout << "Enter the second amount ";
    cin >> amt2;
    
    int sum = amt1 + amt2;

    cout<< "Your amout is: "<< sum;
    return 0;
}