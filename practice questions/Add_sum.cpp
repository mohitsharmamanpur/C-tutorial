#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ans = 0;

    while(num != 0)
    {
        int rem = num%10;
        num = num/10;

        ans = ans + rem;
    }
    cout<<ans<<endl;
 
}