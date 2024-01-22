#include <bits/stdc++.h>
using namespace std;

void rotate(int array[], int d, int size){

    int p=0;
    while(p<d){
        int last = array[0];
        for (int i=0; i<size-1; i++){
            array[i] = array[i+1];
        }
        array[size-1] = last;
        p++;
    }
}

void printrotatedarray(int array[],int size){
    for (int i = 0; i < size; i++){
        cout << array[i] <<" ";

    }
}

int main(){
    
    int size;
    cout << "Enter the size of array" << endl;
    cin >> size;

    int array[size];
    cout << "Enter the element of the array:" << endl;
    for (int i=0; i<size; ++i){
        cout << "Enter the elements" << i+1 << ":"<< endl;
        cin >> array[i];
    }

    int d;
    cout << "Enter the size by which you want to rotate array:" << endl;
    cin >> d;

    rotate (array, d, size);
    printrotatedarray(array,size);
    cout <<endl;

    return 0;

}
