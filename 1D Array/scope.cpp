#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout<<endl<<"Inside the function"<<endl;
    arr[0] = 120;                               //updating arrays first element.
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
        cout<<"Going back to main function"<<endl;
    }
}

int main()
{
    int arr[3] = {1,2,3};
    update(arr , 3);

    cout<<endl<<"Printing in main function"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}




