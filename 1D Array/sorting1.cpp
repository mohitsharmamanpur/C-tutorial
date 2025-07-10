#include<iostream>                    //Sorting(ascending order).
using namespace std;
int main()
{
    int arr[7];
    for(int i=0;i<=6;i++)
    {
        cout<<"Enter element"<< i+1 <<endl;
        cin>>arr[i];
    }

    int c;
    for(int j=0;j<=6;j++)
    {
        for(int k=j+1;k<=6;k++)
        {
            if(arr[j] > arr[k])
            {
                c = arr[j];
                arr[j] = arr[k];
                arr[k] = c;
            }
        }
    }
    for( int l=0;l<=6;l++)
    {
        cout<< arr[l] <<endl;
    }
    return 0;
}