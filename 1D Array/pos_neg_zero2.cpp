#include<iostream>          // To find positive ,negative or zero element in an array using function.      
using namespace std;

void printArray(int arr[] , int n)
{
    for(int i=0;i<=6;i++)
    {
        cout<<"Enter element"<< i+1 <<endl;
        cin>>arr[i];
    }
}


void posnegArray(int arr[] , int n)
{
    int a=0,b=0,c=0;
    for(int j=0;j<=6;j++)
    {
        if(arr[j] > 0)
        {
            a++;
        }
        if(arr[j] < 0)
        {
            b++;
        }
        if(arr[j] == 0)
        {
            c++;
        }
    }
    cout<<"positive numbers are" << a <<endl;
    cout<<"negative numbers are" << b <<endl;
    cout<<"Zeros are" << c <<endl;
}


int main()
{
    int arr[7];

    printArray(arr,7);
    posnegArray(arr,7);

    return 0;
}