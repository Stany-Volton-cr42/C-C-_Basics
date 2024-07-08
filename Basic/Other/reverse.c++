#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number to reversr: ";
    cin >> n;

    int reverse=0;
    while (n>0){
        int last_digit =  n %10;
        reverse = reverse * 10 + last_digit;
        n=n/10;
    }
    cout << "Reverse number is "<< reverse;
    return 0;
}