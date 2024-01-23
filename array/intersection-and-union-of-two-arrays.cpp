#include <bits/stdc++.h>
using namespace std;

// Function to find intersection
void intersection(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] > b[j]) {
            j++;
        }
        else if (b[j] > a[i]) {
            i++;
        }
        else {
            // when both are equal
            cout << a[i] << " ";
            i++;
            j++;
        }
    }
}

// Function to find union
void _union(int a[], int b[], int n, int m)
{
    int i = 0, j = 0;

    // Variable to keep track of the last printed element
    int lastPrinted = INT_MIN;

    while (i < n && j < m) {
        if (a[i] < b[j]) {
            // Print only if the element is not a duplicate
            if (a[i] != lastPrinted) {
                cout << a[i] << " ";
                lastPrinted = a[i];
            }
            i++;
        }
        else if (b[j] < a[i]) {
            // Print only if the element is not a duplicate
            if (b[j] != lastPrinted) {
                cout << b[j] << " ";
                lastPrinted = b[j];
            }
            j++;
        }
        else {
            // when both are equal, print only once
            if (a[i] != lastPrinted) {
                cout << a[i] << " ";
                lastPrinted = a[i];
            }
            i++;
            j++;
        }
    }

    // Print remaining elements of the larger array
    while (i < n) {
        if (a[i] != lastPrinted) {
            cout << a[i] << " ";
            lastPrinted = a[i];
        }
        i++;
    }

    while (j < m) {
        if (b[j] != lastPrinted) {
            cout << b[j] << " ";
            lastPrinted = b[j];
        }
        j++;
    }
}

int main()
{
    int n, m;

    // Input size of the first array
    cout << "Enter the size of the first array: ";
    cin >> n;

    // Input elements of the first array
    int a[n];
    cout << "Enter elements of the first array: " << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    // Input size of the second array
    cout << "Enter the size of the second array: ";
    cin >> m;

    // Input elements of the second array
    int b[m];
    cout << "Enter elements of the second array: " << endl;
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }

    // Sort the arrays
    sort(a, a + n);
    sort(b, b + m);

    // Find and display the intersection
    cout << "Intersection: " << endl;
    intersection(a, b, n, m);
    cout << endl;

    // Find and display the union
    cout << "Union: " << endl;
    _union(a, b, n, m);

    return 0;
}
