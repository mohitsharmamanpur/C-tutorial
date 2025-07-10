#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int space=(n-i);
        while(space)
        {
            cout<<" ";
            space--;
        }
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
         int l=1;
         while(l<=n)
         {
            int m=1;
            while(m<=l)
            {
                cout<<"*";
                m++;
            }
            cout<<endl;
            l++;
         }
         i++;
    }
}