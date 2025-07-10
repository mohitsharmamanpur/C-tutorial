
                              /*           0 0 0 0 0 0 0 0 0 10
                                           0 0 0 0 0 0 0 0 9
                                           0 0 0 0 0 0 0 8          there are 10 rowa and 10 columns.
                                           0 0 0 0 0 0 7
                                           0 0 0 0 0 6
                                           0 0 0 0 5
                                           0 0 0 4
                                           0 0 3
                                           0 2
                                           1                            */


# include <iostream>
using namespace std;
int main()
{
   int n;
   cout<<"Enter value of n"<<endl;
   cin>>n;


   for(int i=0;i<n;i++)
   {
    for(int j=0;j<(n-i-1);j++)
    {
        cout<<"0"<<" ";
    }
    cout<<(n-i);
    cout<<endl;
   } 
   

    return 0;
}