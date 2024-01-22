#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int array[], int size) {

    if (size == 0 || size == 1) return size;

    // Variable to store the index of the new unique element
    int j = 0;

    for (int i = 0; i < size - 1; i++) {
        if (array[i] != array[i + 1]) {
            array[j++] = array[i];
        }
    }
    array[j++] = array[size - 1];

    return j;
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

    // Function call returns the new size of the updated array
    size = removeDuplicates(array, size);

    // Print the updated array
    cout << "Updated Array: ";
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
