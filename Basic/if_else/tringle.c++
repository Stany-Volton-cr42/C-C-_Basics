#include <iostream>
using namespace std;
int main (){
    int side_a, side_b ,side_c;

    cout << "Enter the three side of tringle ";
    cin >> side_a >> side_b >> side_c;

    if (side_a == side_b && side_b == side_c)
    {
        cout << "This is Equilateral tringle ";
    }else if (side_a == side_b || side_a == side_c || side_b == side_c)
    {
        cout << "This is isosclaes tringle ";
    } else {
        cout << "This is scalene tringle ";
    }
    
    return 0;
}