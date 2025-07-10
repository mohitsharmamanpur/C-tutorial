#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space=1;
        while(space<=i)
        {
            cout<<" ";
            space++;
        }
        int j=n+1;
        while(j>i)
        {
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}