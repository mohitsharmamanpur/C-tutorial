#include<iostream>                           //again a default case.
using namespace std;
int main()
{
    char ch = 'a';
    cout<<endl;

    switch(ch)
    {
        case 1 : cout<<"First"<<endl;
        break;
        case '1' : cout<<"Character one"<<endl;
        break;
        default : cout<<"It is a default case"<<endl;
        
    }
    cout<<endl;
}