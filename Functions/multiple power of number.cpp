#include<iostream>                       // in this question are calculating multiple powers of any number                         
using namespace std;                     //so this code becomes bulky ,is not readable.
int main()                               //so we can create a function to minimise the code length.so that the 
{                                        //code becomes easy to read and becomes simple.
    int a,b;                             // So function is defined as a well defined task.

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



int c,d;

    cout<<"Enter the value of c"<<endl;
    cin>>c;

    cout<<"Enter the value of d"<<endl;
    cin>>d;

    int ans = 1;
    for(int i=1;i<=d;i++)
    {
        ans = ans * c;
    }
    cout<<"Answer is"<<ans<<endl;
    return 0;


    int e,f;

    cout<<"Enter the value of e"<<endl;
    cin>>e;

    cout<<"Enter the value of f"<<endl;
    cin>>f;

    int ans = 1;
    for(int i=1;i<=f;i++)
    {
        ans = ans * e;
    }
    cout<<"Answer is"<<ans<<endl;
    return 0;
}