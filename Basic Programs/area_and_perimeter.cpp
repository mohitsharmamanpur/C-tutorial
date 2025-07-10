//program for finding area and perimeter of rectangle
#include<iostream>
using namespace std;
int main()
{
    int length,breadth,area,perimeter;

    cout<<"Enter the length of rectangle";
    cin>>length;

    cout<<"Enter the breadth of rectangle";
    cin>>breadth;

    area=length*breadth;
    cout<<"The area of rectangle is"<<area<<endl;

    perimeter = 2*length*breadth;
    cout<<"Perimeter of rectangle is"<<perimeter<<endl;

    return 0;
}