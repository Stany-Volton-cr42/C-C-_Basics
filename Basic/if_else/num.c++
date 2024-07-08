#include <iostream>
using namespace std;

int main(){
    int num1,num2,max;
    cout << "Enter the two number ";
    cin >> num1 >> num2;
    if (num1 > num2)
    {
        cout << (num1) << " is the greatest ";
    } else
    {
        if (num2 > num1 )
        {
            cout << (num2) << " is the greatest ";
        }else
        {
            cout << "Both " << (num1) << " and " << (num2) << " are Equal ";
        }
    }
    return 0;
    
}