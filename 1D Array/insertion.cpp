#include<iostream>
using namespace std;
int main()
{
    int arr[100];
    for(int i=0;i<=9;i++)
    {
        cout<< "Enter element" << i+1 <<endl;
        cin>>arr[i];
    }


    int pos;
    cout<<"Enter the position" <<endl;
    cin>>pos;

    for(int j=11;j>= (pos-1) ;j--)
    {
        arr[j] = arr[j-1];
    }
    cout<<"Enter number"<<endl;
    cin >> arr(pos-1);

    for(int k=0;k<=10;k++)
    {
        cout<< arr[k] <<endl;
    }
    return 0;
}