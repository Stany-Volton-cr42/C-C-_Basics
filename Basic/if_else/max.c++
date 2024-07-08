#include <iostream>
using namespace std;
int main(){

    int a, b, c, max;
    cout << "Enter the Three number ";
    cin >> a >> b >> c;

    if(a>b && a>c){
        cout << (a)<<" is the Greatest number"<< endl;
    }
    else if (b>c)
    {
        cout << (b) << " is the greatest number"<< endl;
    }else {
        cout << (c) << " is the grestest number ";
    }
    
    return 0;
}