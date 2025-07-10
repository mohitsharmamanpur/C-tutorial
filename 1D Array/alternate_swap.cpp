#include<iostream>
using namespace std;

void printArray(int arr[], int n) {

    for(int i = 0; i<n; i++ ) {
        cout<< arr[i] <<" ";
    }cout<<endl;

}

void swapAlternate(int arr[], int size) {

    for(int i = 0; i<size; i = i+2 ) {
        if(i+1 < size) {
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }

}

int main() {

    int even[8] = {1,2,3,4,5,6,7,8};
    int odd[5] = {9,10,11,12,13};

    swapAlternate(even, 8);
    swapAlternate(odd, 5);


    printArray(even, 8);
    printArray(odd, 5);

    cout << endl;


    return 0;
}