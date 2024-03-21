#include <iostream>
using namespace std;

void rearrangePositiveNegative(int array[], int size) {
    int left = 0, right = size - 1;

    while (left <= right) {
        // Find the next positive number from the left
        while (left <= right && array[left] < 0) {
            left++;
        }

        // Find the next negative number from the right
        while (left <= right && array[right] >= 0) {
            right--;
        }

        // Swap the positive number at left and negative number at right
        if (left < right) {
            swap(array[left], array[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array:" << endl;
    cin >> size;

    int array[size];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Enter the element " << i + 1 << ": " << endl;
        cin >> array[i];
    }

    // Function call to rearrange positive and negative numbers
    rearrangePositiveNegative(array, size);

    // Print the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
