#include<iostream>
using namespace std;

bool checkPalindrome(char a[] , int n)
{
    int s = 0;
    int e = n-1;

    while(s<e)
     {
     if(a[s] != a[e])
     {
        return 0;
     }
     else{
        s++;
        e--;
     }
     }
     return 1;
}


int manin()
{
    char name[];
    cout<<"Enter the string"<<endl;

    cout<<"palindrome or not"<< checkPalindrome <<endl;
}