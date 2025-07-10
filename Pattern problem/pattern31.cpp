#include<iostream>                                     //       ++++
using namespace std;                                   //          +
int main()                                             //          +
{                                                      //          +
    // int n;                                          //          +
    // cout<<"Enter n: "<<endl;                        //          +
    // cin>>n;                                         //          ++++
                                                       
    for(int i=1;i<=7;i++)
    {
        for(int j=1;j<=7;j++)
        {
            if(i==1 && j<=4 || j==4 || i==7 && j>=4)
            {
                cout<<"+";
            }
            else
            {
                cout<<" ";
            }   
        }
        cout<<endl;
    } 
}