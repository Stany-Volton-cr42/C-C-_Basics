#include <iostream>
// it is same as switch
using namespace std;

int main()
{
    char botton;
    cout << "Enter the charctor a to d ";
    cin >> botton;
    switch (botton)
    {
    case 'a':
        cout << "Hello";
        break;
    case 'b':
        cout << "Bonjor";
        break;
    case 'c':
        cout << "Namaste";
        break;
    case 'd':
        cout << "hola";
        break;
    default:
    cout << "I am still learning ";
        break;
    }
    return 0;
}