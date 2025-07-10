# include <iostream>
using namespace std;

int climbStairs(int n)
{
    if( n<0)
    return 0;
    if(n == 0)
    return 1;

    return ((n-1) + (n-2));
}

int main()
{
   int n;
   cin>>n;

   int ans = climbStairs(n);
   cout<< ans <<endl;
    
    return 0;
}