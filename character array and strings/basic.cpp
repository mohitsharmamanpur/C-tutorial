#include<iostream>            //in this case if i want to print (Mohit sharma) than only mohit will be 
using namespace std;          //printed. cin will stop when we give space,tab and newline. 
int main()
{
    char name[20];
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"My name is"<<"-->"<<name<<endl;
}