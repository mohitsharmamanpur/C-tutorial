#include<iostream>                    //Write a program to delete an element in an array.
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<=9;i++)
    {
        cout<< "Enter number" << i+1 << endl;
        cin >> arr[i];
    }


    int a;
    cout<<"Enter position on which to be deleted"<<endl;
    cin>>a;

    for(int j=a-1;j<=9;j++)
    {
        arr[j] = arr[j+1];
    }

    for(int k=0;k<=9;k++)
    {
        cout<< arr[k] <<endl;
    }
    return 0;
}