/*#include<iostream>                   //print numbers from 1 to n using for loop.
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    cout<<"printing count from 1 to n"<<endl;

    for(int i=1;i<=n;i++)
    {
      cout<< i <<endl;  
    }
    
}*/



#include<iostream>                      //printing number from 1 to using while loop.
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    
     cout<<"printing count from 1 to n"<<endl;

    int j=1;
    while(j<=n)
    {
        cout<< j <<endl;
        j++;
    }
}