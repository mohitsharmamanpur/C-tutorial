#include<iostream>                           //again a default case.
using namespace std;                          //if we do nor apply break statement after case 1, then both case 
int main()                                    //will be printed. If we apply break after case one,then only 
{                                             //case 1 will be printed.
    char ch = 'a';
    int num = 1;
    cout<<endl;

    switch(num)
    {
        case 1 : cout<<"First"<<endl;
                cout<<"First again"<<endl;
        case '1' : cout<<"Character one"<<endl;
        break;
        default : cout<<"It is a default case"<<endl;
        
    }
    cout<<endl;
}