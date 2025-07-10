# include <iostream>           // now talk about character arrays.
using namespace std;

int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch[6] = "abcde";      //---> it is of length 6 because it also has null character.


    cout<< arr <<endl;
    cout<< ch <<endl;

    char *c = &ch[0];
    
    cout<< c <<endl;    //--> address print nahi hoga, puri string hi print ho jaige.

    
    char temp = 'z';
    char *p = &temp;
    cout<< p <<endl;


    return 0;
}