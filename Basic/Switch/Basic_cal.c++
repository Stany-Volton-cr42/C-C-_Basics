#include <iostream>

using namespace std;

int main()
{
    float n1,n2;
    cout << "Enter Two number ";
    cin>>n1>>n2;

    char op;
    cout << "Enter the operator ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "Sum of two number is " << n1 + n2;
        break;
    case '-':
        cout << "Sum of two number is " << n1 - n2;
        break;
    case '*':
        cout << "Sum of two number is " << n1 * n2;
        break;
    case '/':
        cout << "Sum of two number is " << n1 / n2;
        break;
    
    default:
    cout << "Please! Give the right input ";
        break;
    }
    return 0;
}