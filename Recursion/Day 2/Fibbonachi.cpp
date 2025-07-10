# include <iostream>
using namespace std;

int fibbonachi(int n)
{
    if( n==0 )
    return 0;                  // both are base case.
    if( n==1 )
    return 1;

    int ans = fibbonachi(n-1) + fibbonachi(n-2);
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int ans = fibbonachi(n);

    cout << ans <<endl;
    
    return 0;
}