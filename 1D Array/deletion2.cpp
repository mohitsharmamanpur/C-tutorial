#include<iostream>
using namespace std;

void printArray(int arr[] , int n)
{
    for(int i=0;i<=9;i++)
    {
        cout<<"Enter element" << i+1 <<endl;
        cin>>arr[i];
    }
}


void deleteArray(int arr[],int n)
{
int a;
cout<<"Enter position to be deleted"<<endl;
cin>>a;

for(int j=a-1;j<=9;j++)
{
    arr[j] = arr[j+1];
}

for(int k=0;k<=9;k++)
{
    cout<< arr[k] <<endl;
}

}



int main()
{
    int arr[10];

    deleteArray(arr,10);
    printArray(arr,10);

    return 0;

}