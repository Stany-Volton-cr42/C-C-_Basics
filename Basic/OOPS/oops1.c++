#include <iostream>
using namespace std;

class Array {
private:
  int arr[5];

public:
  void set(int index, int value) {
    arr[index] = value;
  }

  int get(int index) {
    return arr[index];
  }
};

int main() {
  Array myArray;

  // set values
  myArray.set(0, 10);
  myArray.set(1, 20);
  myArray.set(2, 30);
  myArray.set(3, 40);
  myArray.set(4, 50);

  // get values and print
  for (int i = 0; i < 5; i++) {
    cout << "Element " << i << " is: " << myArray.get(i) << endl;
  }

  return 0;
}