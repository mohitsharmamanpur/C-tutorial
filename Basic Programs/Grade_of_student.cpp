#include<iostream>
using namespace std;
int main()
{
    int marks;
    cin>>marks;

    if(marks>80)
    {
        cout<< "A+" <<endl;
    }
    else if(marks<80 && marks>60)
    {
        cout<< "A" <<endl;
    }
    else if(marks<60 && marks>40)
    {
        cout<< "B" <<endl;
    }
    else(marks < 40)
    {
        cout<< "fail" <<endl;
    }
    return marks;   
}