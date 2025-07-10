#include<iostream>
using namespace std;

void reverse(int arr[] , int n)
{
    int start = 0;
    int end = n-1;

    while(start <= end)
    {
        int temp;
        temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp; 
        start++;
        end--;
    }
}



void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
{
    cout<< arr[i] << " ";
}
cout<<endl;
}

int main()
{
    int arr[6] = {1,2,3,4,5,6};
    int brr[5] = {7,8,9,0,1};

    reverse(arr,6);
    reverse(brr,5);

    printArray(arr,6);
    printArray(brr,5);

    return 0;
}