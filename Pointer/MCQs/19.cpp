# include <iostream>
using namespace std;

int main()
{
    int first = 110;
    int *p = &first;
    int **q = &p;
    int second = (**q)++ + 9;  // **q matlab 2 step piche jaakr 1 increment krna h.
    
    cout<< first <<" "<< second<<endl;
    
    return 0;
}