# include <iostream>
using namespace std;

int main()
{
   char arr[] = "abcde";
   char *p = &arr[0];
   p++;                   // ---> now pointer is pointing to second index.
   cout<< p <<endl;      

    return 0;
}