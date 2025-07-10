# include <iostream>
using namespace std;

int main()
{
    int arr[] = {11,21,31,41};
    int *ptr = arr++;              // is line m galti h. we cant update the symbol table.
    cout<< *ptr <<endl;


    return 0;
}