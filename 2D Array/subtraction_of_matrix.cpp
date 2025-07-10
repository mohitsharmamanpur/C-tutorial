#include<iostream>                   //addition of two matrix.
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
        {                                        //in c++, '\t' is used in place of /t in c.
            c[i][j] = a[i][j] - b[i][j];
            cout<< c[i][j] <<'\t';
        }
        cout<<endl;
    }
}