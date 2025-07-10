#include<iostream>
using namespace std;
int main()
{
    //declering an array
    int number[15];

    //assessing an array.
    cout << "Value at 1 index" << number[1] <<endl;
    cout << "Value at 10 index" << number[10] <<endl;
    cout << "Value at 15 index" << number[15] <<endl;
    cout<<"Everything is Fine"<<endl;



    //initilising array.
    int second[3] = {5,7,11};

    //accessing an array.
    cout<< "Value at 2 index is" << second[2] <<endl;


    int third[15] = {3,5};          
    int m = 15;
    cout << "Printing te array" << endl;
    for(int i=0;i<m;i++)
    {
        cout<< third[i] <<" ";
    }

    int forth[10] = {0};                   //initilising all locations with 0.
    int n = 10;
    cout << "Printing te array" << endl;
    for(int i=0;i<n;i++)
    {
        cout<< forth[i] <<" ";
    }


      int fifth[10] = {1};                   //initilising all locations with 1.--> it cannot be done.
    int p = 10;
    cout << "Printing te array" << endl;
    for(int i=0;i<p;i++)
    {
        cout<< fifth[i] <<" ";
    }
}