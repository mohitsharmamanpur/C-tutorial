#include<iostream>              //Write a program to sort all 0s and 1s in an array.
using namespace std;            //We will put all 0s in left position and all 1s in right position.

void printArray(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        cout<< arr[i] <<" ";
    }
    cout<<endl;
}


void sortOne(int arr[] , int n)
{
    int left = 0; 
    int right = n-1;
    
    while(left<right)
    {
        while(arr[left] == 0 && left < right)
        {
            left++;
        }
        while(arr[right] == 1 && left<right)
        {
            right--;
        }
    if(left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
}




int main()
{
    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr , 8);
    printArray(arr , 8);

    return 0;
}