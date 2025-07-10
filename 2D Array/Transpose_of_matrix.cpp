#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3];

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Emter matrix"<<endl;
            cin>>a[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            b[i][j] = a[j][i];
            cout<< b[i][j] <<'\t';
        }
        cout<<endl;
    }
}