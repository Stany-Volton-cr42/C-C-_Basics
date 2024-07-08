#include <iostream>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10;
    int y = 20;
    
    cout << "Before swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    
    // Call the swap function using reference variables as arguments
    swap(x, y);
    
    cout << "After swapping:" << endl;
    cout << "x = " << x << ", y = " << y << endl;
    
    return 0;
}
