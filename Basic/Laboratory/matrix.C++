#include <iostream>

using namespace std;

int main() {
  int arr[10];
  int size, pos, elem;

  cout << "Enter the size of the array: ";
  cin >> size;

  cout << "Enter the elements of the array: ";
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Enter the element to insert: ";
  cin >> elem;

  cout << "Enter the position to insert at: ";
  cin >> pos;

  if (pos < 0 || pos > size) {
    cout << "Invalid position." << endl;
    return 1;
  }

  for (int i = size - 1; i >= pos; i--) {
    arr[i + 1] = arr[i];
  }

  arr[pos] = elem;

  cout << "The new array is: ";
  for (int i = 0; i < size + 1; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  return 0;
}
