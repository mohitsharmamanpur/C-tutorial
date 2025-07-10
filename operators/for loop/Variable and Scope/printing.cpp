#include<iostream>                  //we are declaring a two times and no error will come because , 2nd a is in another condition or block.
using namespace std;
int main()
{
    int a=3;
    cout<< a  <<endl;

    if(true)
    {
        int b=5;
        cout<< b  <<endl;
    }
    int b=1;
    cout<< b <<endl;

    for(int i=0;i<8;i++)
    cout<<"Hi"<<endl;
}