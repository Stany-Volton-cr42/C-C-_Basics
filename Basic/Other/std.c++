#include <iostream>

using namespace std;

int main()
{
    int student, sum = 0;
    for (int i = 1; i <=6; i++)
    {
        cout << "Enter the subject number: ";
        cin >> student;

        sum = sum + student;
    }
    cout << "The marks of the 6 subject are: "<< sum;
    return 0;
}