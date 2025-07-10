#include<iostream>                     //find fibonacci series of starting 10 numbers.
using namespace std;                   //starting two numbers are a=0 and b=1.
int main()
{
    int n =10;

    int a=0;
    int b=1;
    cout<< a <<" "<< b <<" ";
    for(int i=1;i<=n;i++)
    {
        int nextnumber = a+b;
        cout<<nextnumber<<" ";

        a=b;
        b=nextnumber;
    }
}