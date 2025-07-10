#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int p;
    cout<<"Enter value of p"<<endl;
    cin>>p;

    int r;
    cout<<"Enter value of r"<<endl;
    cin>>r;

    int t;
    cout<<"Enter the value of t"<<endl;
    cin>>t;

    int simpleinterest = (p*r*t)/100;
    
    {
        cout<<"Simple interest is  = "<<simpleinterest<<endl;
    }
    return 0;
}


