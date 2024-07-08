#include <iostream>
using namespace std;
int main(){
    int i;
    cout << "Enter any possitive no for repeat and negative for exit ";
    cin >> i;
    while (i>0)
    {
        cout << "your number is "<< i << endl;
        cout << "Enter any possitive no for repeat and negative for exit ";
        cin >> i;
    }
return 0;   
}