#include<iostream>     // Write a program to to copy elements of onr array to another.
using namespace std;

void printArray(int arr[] , int m)
{
   for(int i=0;i<m;i++)
   {
     cout<< arr[i+1];
   }
   cout<<endl;
}

void copyArray(int arr1[] , int n , int arr2[] , int m)
{
  for(int i=0;i<n;i++)
  {
    arr2[m] == arr1[n];
    n++;
  }
}

int main()
{
    int arr1[5] = {4,2,7,6,8};
    int arr2[] = {0};

    cout<<"Elements of array 1 is: "<<endl;
    printArray(arr1 , 5);

    copyArray(arr1 , 5 , arr2 , 5);

    cout<<"Elements of array 2 is: "<<endl;
    printArray(arr2 , 5);

}