#include<iostream>          //write a program to find out number of positive,negative and zero element in 
using namespace std;        //an array.
int main()
{
    int arr[7];
    for(int i=0;i<=6;i++)
    {
        cout<<"Enter element" << i+1 <<endl;
        cin>>arr[i];
    }

    int a=0,b=0,c=0;
    for(int j=0;j<=6;j++)
    {
        if(arr[j]>0)
        {
            a++;
        }
        if(arr[j]<0)
        {
            b++;
        }
        if(arr[j] == 0)
        {
            c++;
        }
    }
    cout<< "positive numbers are" << a <<endl;
    cout<< "negative numbers are" << b <<endl;
    cout<< "zero are" << c <<endl;
    return 0;
}