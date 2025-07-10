# include <iostream>
using namespace std;

int main()
{
    int first = 8;
    int *p = &first;

    cout<< (*p)++ << " ";      //--> post increment h..isliye pehle value print hogi..fir increment hoga.
    cout<< first <<endl;

    
    return 0;
}