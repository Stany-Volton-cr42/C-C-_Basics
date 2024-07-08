#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    bool flag=0;

    for(int i=2; i<=sqrt(n);i++){
        if (n%i==0){
            cout << "The number is non Prime";
            flag=1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "The number is Prime number";
    }
    
    return 0;
}