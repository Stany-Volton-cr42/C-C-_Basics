#include <iostream>

using namespace std;

int main()
{
    int tb,mul;
    cout << "enter the Number to Generate the table: ";
    cin >> mul;
    for (tb = 1; tb<=10; tb++){
        cout << mul << " * " << tb << " = " << tb*mul << endl;
    }
    return 0;
}