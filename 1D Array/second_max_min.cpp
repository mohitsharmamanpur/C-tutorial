#include <iostream>
using namespace std;

int findSecondMaximum(int arr[], int n) {
    if (n < 2) 
    {
        cout << "Array must contain at least two elements." << endl;
        return -1;
    }

    int max1 = arr[0];
    int max2 = -2147483648; // Smallest possible integer      By initializing max2 to this very small value, we ensure that any valid second maximum found in the array will be larger than this value.


    for (int i = 1; i < n; ++i)               //We start iterating from the second element of the array (i = 1) because we have already used the first element to initialize max1.
     {
        if (arr[i] > max1)
         {
            max2 = max1;
            max1 = arr[i];
        } 
        else if (arr[i] > max2 && arr[i] < max1) 
        {
            max2 = arr[i];
        }
    }

    // if (max2 == -2147483648) {
    //     // No valid second maximum element found
    //     cout << "No second maximum element exists." << endl;
    //     return -1; // Indicating an error
    // }

    return max2;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2)
     {
        cout << "Array must contain at least two elements." << endl;
        return 1;
    }
    int arr[n]; 
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i)
     {
        cin >> arr[i];
    }
    int secondMax = findSecondMaximum(arr, n);
    if (secondMax != -1) 
    {
        cout << "The second maximum element is: " << secondMax << endl;
    }
    return 0;
}
