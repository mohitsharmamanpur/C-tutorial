#include<iostream>                      //sum of numbers from 1 to n.
using namespace std;
int main()
{
   int n;
   cout<<"Enter the value of n"<<endl;
   cin>>n;

   int sum = 0;

   for(int i=1;i<=n;i++)
   {
    sum = sum + i;
   }
    cout<< sum <<endl;
}