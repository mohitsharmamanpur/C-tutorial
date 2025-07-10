# include <iostream>
using namespace std;

int main()
{
   char arr[] = "abcde";
   char *p = &arr[0];               // functioning of character array and integer array are different.
   cout<< p <<endl;        // if we want to print character array using pointer, than address print nahi 
                           // hota, pura array hiprint ho jata h.
    return 0;
}