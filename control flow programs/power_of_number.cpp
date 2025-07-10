#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cout<<"Enter value of a"<<endl;
    cin>>a;

    int b;
    cout<<"Enter value of b"<<endl;
    cin>>b;

   int ans = 1;
   for(int i=1;i<=b;i++)
   {
    ans = ans * a;
    cout<<"Answer is"<<ans<<endl;
   }
}