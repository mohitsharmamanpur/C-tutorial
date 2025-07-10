# include <iostream>
using namespace std;

void printcounting(int n)
{
    if( n == 0)
    return;

    cout<< n <<endl;

    printcounting(n-1);
}

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    printcounting(n);
    
    return 0;
}