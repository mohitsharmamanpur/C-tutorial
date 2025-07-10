#include<iostream>
using namespace std;    // if we add null character at any index, than only characters 
int main()                           //before that will be printed.
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    name[3] = '\0';
    cout<<"Your name is"<<"-->>"<<name<<endl;
}