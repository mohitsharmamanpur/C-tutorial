//check if a number is positive negative or zero.(using if,else if,else condition)

#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;

    cout<<"Enter the value of a"<<endl;

    if(a>0)
    {
        cout<<"a is positive";
    }
    else if(a<0)
    {
        cout<<"a is negative";
    }
    else{
        cout<<"a is Zero";
    }
}