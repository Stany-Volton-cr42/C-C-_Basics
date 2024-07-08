#include <iostream>
using namespace std;

int main()
{
    int marks[6], total = 0;

    // get the marks of 6 subjects from the user
    for (int i = 0; i < 6; i++) {
        cout << "Enter the mark of subject " << i + 1 << ": ";
        cin >> marks[i];
        total += marks[i];
    }

    // display the total marks
    cout << "The total marks is " << total << endl;

    return 0;
}
