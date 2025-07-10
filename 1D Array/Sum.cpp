#include <iostream>
using namespace std;

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum = sum + arr[i]; 
    }
    return sum; 
}

int main() {
    int SIZE = 5; 
    int arr[SIZE];

    cout << SIZE << endl;
    for (int i = 0; i < SIZE; ++i) {
        cout << "Element " << i + 1 << " ";
        cin >> arr[i];
    }

    int totalSum = sumArray(arr, SIZE);

    cout << "The sum of the array elements is: " << totalSum << endl;

    return 0;
}