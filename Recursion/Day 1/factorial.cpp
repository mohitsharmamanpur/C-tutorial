#include<iostream>
using namespace std;

int factorial(int n)
{                      // we have to write base case complusory.-->otherwiser code will not run.
    if( n == 0)
    return 1;

   int smallproblem = factorial(n-1);     //We can also write as-->>  return n * factorial(n-1);
   int bigproblem = n * smallproblem;            

    return bigproblem;

    
}

int main()
{
    int n;
    cout<<"Enter value of n:"<<endl;
    cin>>n;

    int ans = factorial(n);
    cout<< ans <<endl;

    return 0;
}