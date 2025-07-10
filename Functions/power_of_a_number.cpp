#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout<<"Enter the value of a"<<endl;
    cin>>a;

    cout<<"Enter the value of b"<<endl;
    cin>>b;

    int ans = 1;
    for(int i=1;i<=b;i++)
    {
        ans = ans * a;
    }
    cout<<"Answer is"<<ans<<endl;
    return 0;
}