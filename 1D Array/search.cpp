// #include<iostream>             //write a program to search an element in an array.
// using namespace std;
// int main() 
// {
//     int arr[10];
//     for(int i=0;i<=9;i++)
//     {
//         cout<<"Enter element of an array"<< i+1 <<endl;
//         cin>>arr[i];
//     }


// int c = 0;
// cout<<"Enter number to search"<<endl;
// cin>>c;

// for(int j=0;j<=9;j++)
// {
//     if(arr[j] == c)
//     {
//         cout<<"it is on this location"<< c <<endl;
//     }
// }
// return 0;

// }



#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter the number of elements"<<endl;

    for(int i=0;i<=9;i++)
    {
        cout<<"Enter the values"<< i+1 <<endl;
        cin>>arr[i];
    }

    int key;
    cout<<"Enter value to be search"<< key <<endl;
    cin>>key;
    {
    for(int i=0;i<=9;i++)
    {
        if(arr[i] == key)
        {
            cout<<"The number is at this position"<< i+1 <<endl;
            break;
        }
    }
}
return 0;
}