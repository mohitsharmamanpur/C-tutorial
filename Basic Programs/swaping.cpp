//program to swap two numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;

    cout<<"The value of numbers before swapping is"<<a<<"and"<<b<<endl;

    int temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"The value of numbers after swapping is"<<a<<"and"<<b<<endl;
    
}