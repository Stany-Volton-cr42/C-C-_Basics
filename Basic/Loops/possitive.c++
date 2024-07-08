#include <iostream>

using namespace std;

int main()
{
    int number = 0, sum = 0;

    while (number>=0)
    {
        sum += number;
        cout << "Enter the +ve number to add and -ve to exit: ";
        cin >> number;
    }
    cout << "Your total sum is "<< sum << endl;
    
    return 0;
}
