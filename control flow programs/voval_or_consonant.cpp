//program to check given alphabet is voval or consonant.

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character"<<endl;
    cin>>ch;

    if(ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u')
    {
        cout<<"it is a voval:  "<<ch<<endl;
    }
    else 
    {
        cout<<"it is a consonant:  "<<ch<<endl;
    }
    // else
    // {
    //     cout"is not a alphabet"<<ch<<endl;
    // }
    return 0;
}
