#include<bits/stdc++.h>
using namespace std;

int secondLargest(int array[], int size){

    int largest = 0;
    int second_largest = -1;

    for (int i = 1; i < size; i++) {
        if (array[i] > array[largest]) {
            second_largest = largest;
            largest = i;
        } else if (array[i] < array[largest]) {
            if (second_largest == -1 || array[second_largest] < array[i]) {
                second_largest = i;
            }
        }
    }

    return second_largest;
}

int main()
{
    int size;
    cout << "Enter the size of an Array: ";
    cin >> size;

    int array[size];

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter element " << i+1 << ": ";
        cin >> array[i];
    }

    int index = secondLargest(array, size);
    if (index == -1)
        cout << "Second Largest doesn't exist" << endl;
    else
        cout << "Second largest: " << array[index] << endl;

    return 0;
}
