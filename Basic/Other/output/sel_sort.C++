#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swap arr[i] with the minimum element
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print the original array
    cout << "Original Array: ";
    cout << "[";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << "\n";

    selectionSort(arr, size);

    // Print the sorted array
    cout << "Sorted Array: ";
    cout << "[";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "]";
    cout << "\n";

    return 0;
}