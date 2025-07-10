#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;

    if(n%4==0)
    {
        cout<<"it is a leap year"<< n <<endl;
    }
    else
    {
        cout<<"not a leap year"<< n << endl;
    }
    return 0;
}