#include <iostream>
// A robot says hello in different language to press the different type of botton
using namespace std;

int main()
{
// The switch is subtitute for long if else statement means You can able to write the 
// same program in if else statement
// To unsersteand more Go to switch 2
    char botton;
    cout << "Enter any Charctor a to d ";
    cin >> botton;
    if (botton == 'a')
    {
        cout << "Hello ";
    }
    else if (botton == 'b')
    {
        cout << "Bonjor ";
    }
    else if (botton == 'c')
    {
        cout << "Nameste";
    }
    else if(botton == 'd')
    {
        cout << "Hola";
    }
    else {
        cout << "I am still learning: ";
    }
    return 0;
}