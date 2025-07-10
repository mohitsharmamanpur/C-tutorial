#include<iostream>                   // multiplication of two matrix.
using namespace std;
int main()
{
    int a[3][3] , b[3][3] , c[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"First matrix"<<endl;
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Second matrix"<<endl;
            cin>>b[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<3;k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<< c[i][j] <<'\t';
        }
        cout<<endl;
    }
}