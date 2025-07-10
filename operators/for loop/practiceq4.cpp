#include<iostream>                               //if we only print j ,66666 will come ?????
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(i+j==10)
            {
                break;
            }
        }
        {
            cout<< i <<" "<< j <<endl;
        }
    }
}