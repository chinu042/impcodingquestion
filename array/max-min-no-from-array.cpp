#include <iostream>
#include <climits>
using namespace std;

pair<int, int> findMaxMin(int arr[], int size) {
    if (size == 0) {
        return make_pair(INT_MIN, INT_MAX);
    }

    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < size; ++i) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        } else if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return make_pair(maximum, minimum);
}

int main() {
    int size;

    cout << "Enter the size of the array: ";
    cin >> size;

    int array[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }

    pair<int, int> result = findMaxMin(array, size);
    cout << "Maximum number: " << result.first << endl;
    cout << "Minimum number: " << result.second << endl;

    return 0;
}
