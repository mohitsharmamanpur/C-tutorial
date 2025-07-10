// Given n non-negative integers representing an elevation map where the width of each bar is 1, 
// compute how much water it can trap after raining. Eg height = [4,2,0,6,3,2,5]. 
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int trap(const vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    vector<int> leftMax(n);
    vector<int> rightMax(n);

    // Compute leftMax array
    leftMax[0] = height[0];
    for (int i = 1; i < n; ++i) {
        leftMax[i] = max(leftMax[i - 1], height[i]);
    }

    // Compute rightMax array
    rightMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        rightMax[i] = max(rightMax[i + 1], height[i]);
    }

    // Compute the total amount of water trapped
    int trapped = 0;
    for (int i = 0; i < n; ++i) {
        trapped = trapped + min(leftMax[i], rightMax[i]) - height[i];
    }

    return trapped;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "The array is: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "The amount of water trapped is: " << trap(arr) << endl;

    return 0;
}
