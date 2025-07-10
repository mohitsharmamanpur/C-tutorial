# include <iostream>            // given an array, we have to create a function which will tell me, this
using namespace std;            //   array is sorted or not?? using recursion.

bool isSorted(int arr[] , int size)
{
    if(size == 0 || size == 1)
    return true;

    if(arr[0] > arr[1])
    return false;

    else
    {
      bool remainingPart = isSorted(arr+1 , size-1);
      return remainingPart;
    }
}

int main()
{
    int arr[5] = {1,3,4,7,9};
    int size = 5;

    bool ans = isSorted(arr , size);

    cout<< ans <<endl;
    
    return 0;
}