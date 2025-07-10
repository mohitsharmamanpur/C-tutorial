#include<iostream>                                 // we can inset multiple variables in our for loop.
using namespace std;
int main()                                         // it can be multiple conditions,multuple initilizations and multiple increment,decrement.
{
    int n;
    cout<<"Enter the value of n";
    
    cout<<"printing count from 1 to n"<<endl;

    for(int a=0,b=1,c=2 ; a>=0 && b>=1 && c>=2 ;a--,b--,c--)
    {
        cout<< a <<" "<< b <<" "<< c <<endl;
    }
}