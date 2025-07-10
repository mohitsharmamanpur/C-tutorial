# include <iostream>    // write a function to find the sum of elements in an array? using recursion?
using namespace std;

int getSum(int arr[] , int size)
{
    if( size == 0)                   // agar == ki gajah = kr rahe h to ,array ka first element hi print
    return 0;                              // ho jaa raha h.
                      // both are base case.
    if(size == 1)
    {
        return arr[0];
    }

    int remainingPart = getSum(arr+1 , size-1);
    int sum = arr[0] + remainingPart;
    return sum;
}


int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    int sum = getSum(arr , 5);
    cout<<"Sum is= "<< sum <<endl;
    
    return 0;
}