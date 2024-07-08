// program to calclute the sum of n number
#include <iostream>
using namespace std;
int main(){
    int n,i,sum = 0;
    cout << "Enter the number for sum ";
    cin >> n;
    for ( i = 1; i<=n ; i++)
    {
        sum = sum + i;
    }
    cout << "The sum of 1 to " << n << " is " << sum;
    return 0;
}