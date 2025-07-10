# include <iostream>
using namespace std;

void sayDigit(int n , string arr[])
{
    if( n== 0)                           // base case.
    return ;


    int digit = n%10;               // processing.
       n = n/10;
   
sayDigit(n , arr);                  // recursive call.

  cout<< arr[digit] <<endl;

}

int main()
{
    string arr[10] = {"Zero","One","two","three","four","five","six","seven","eight","nine"};

    int n;
    cout<<"Value of n:"<<endl;
    cin>>n;

    sayDigit(n , arr);
    
    return 0;
}