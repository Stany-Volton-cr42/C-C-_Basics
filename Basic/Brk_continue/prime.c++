#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cout << "Enter the number ";
    cin >> n; 
    for ( i = 2; i <n; i++)
    {
        if (n%i == 0)
        {
            cout << "non prime"<< endl;
            break;
        } 
    }
    if (i==n)
    {
        cout << "prime";
    }
    
    return 0;
}