#include<iostream>
using namespace std;

void reverse(char name[] , int n )
{
    int s = 0;
    int e = n-1;

    while(s<e)
    {
       swap(name[s] , name[e]);
       s++;
       e--;
    }
}


int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"Your name is "<< name <<endl;

    cout<<"reverse of string is"<< reverse <<endl;

    return 0;
}