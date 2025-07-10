# include <iostream>              // binary search using recursion.
using namespace std;

bool binarySearch(int arr[] , int start , int end , int key)
{
    if(start > end)                                                        // base case.
    return false;

    int mid = start + (end - start)/2;
    
    if(arr[mid] == key)
    {
        return true;
    }
    else if(key > arr[mid])
    {
        return binarySearch(arr , mid+1 , end , key);
    }
    else{
        return binarySearch(arr , start , mid-1 , key);
    }

    mid = start + (end-start)/2;

}

int main()
{
    int arr[5] = {2,3,5,7,9};
    int size = 5;
    int key = 7;

cout<<"Present or not"<< binarySearch(arr , 0 , size-1 , key);
    
    return 0;
}