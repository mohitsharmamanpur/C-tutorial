# include <iostream>
using namespace std;

int main()
{
    int *p = 0;                         //---> Null pointer.
    int first = 110;
    *p = first;               // --> Galti h..--> we have to initilise like this -->  p = &first;

    cout<< *p <<endl;


    return 0;
}