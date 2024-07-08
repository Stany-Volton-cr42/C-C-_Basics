#include <iostream>

using namespace std;


// subprogram to increment a and assign the new value to b
void preIncrement()
{
    int a = 1,b;
    b = ++a;
    cout << "Value of a is " << a << " and the value of b is " << b << endl;
}

// subprogram to assign the current value of a to b and then increment a
void postIncrement()
{
    int a = 1,b;
    b = a++;
    cout << "Value of a is " << a << " and the value of b is " << b << endl;
}

int main()
{
    preIncrement();  
    postIncrement();  
    return 0;
}
