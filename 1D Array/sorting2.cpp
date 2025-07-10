#include<iostream>                             //sorting(ascending order) using functions.
using namespace std;

void printArray(int arr[] , int n)
{
    for(int i=0;i<=6;i++)
    {
        cout<<"Enter element" << i+1 <<endl;
        cin>>arr[i];
    }
}


void printAscending(int arr[] , int n)
{
    int temp;
    for(int j=0;j<=6;j++)
    {
        for(int k=j+1;k<=6;k++)
        {
            if(arr[j] > arr[k])
            {
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for(int l=0;l<=6;l++)
    {
        cout<< arr[l] <<endl;
    }
}



int main()
{
    int arr[7];

    printArray(arr,7);
    printAscending(arr,7);

    return 0; 
    
}