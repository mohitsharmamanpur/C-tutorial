#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<=9;i++)
    {
        cout<<"Enter element of array"<< i+1 <<endl;
        cin>>arr[i];
    }


    int max = arr[0];
    for(int j=0;j<=9;j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
             cout<<"maximum number is"<< max <<endl;
        }
       
    }
    return 0;
}