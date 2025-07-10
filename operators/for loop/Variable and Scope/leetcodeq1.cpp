#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum = 0;
    int product = 1;

    while(n!=0)
    {
        int digit = n%10;
        prod prod * digit;
        sum = sum + digit;

        n = n/10;
    }
    int answer = prod - sum;
    return answer;
}