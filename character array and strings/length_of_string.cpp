#include<iostream>
using namespace std;

void getLength(char name[]) 
{
    int count = 0;
    for(int i=0;name[i] != '\0';i++)
    {
     count++;
    }
//return count;
    
}


int main()
{
    char name[20];
    
    cout<<"Enter your name"<<endl;
    cin>>name;

    cout<<"your name is"<<endl;
    cout<<name<<endl;

    cout<< "length:" << getLength <<endl;

return 0;
}