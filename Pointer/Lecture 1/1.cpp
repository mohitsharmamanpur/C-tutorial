#include<iostream>
using namespace std;
int main()
{
    int num = 5;
    
    cout<< num <<endl;

    //Address of operator.--it shows to which address 5 is mapped with.

    cout<<"Address of num is" << &num <<endl;

    int *ptr = &num;

    cout<<"Value is :"<< *ptr <<endl;     // -->  box ki value ko print krega.
    cout<<"Address id :"<< ptr <<endl;      // --> box ke address ko print krega.

    double d = 4.3;
    double *p2 = &d;

    cout<<"Value is"<<*p2 <<endl;
    cout<<"Address is"<<p2<<endl;

    cout<<"Size of integer"<<sizeof(num)<<endl;
    cout<<"Size of pointer"<<sizeof(ptr)<<endl;
    cout<<"Size of pointer"<<sizeof(p2)<<endl;


    return 0;
}