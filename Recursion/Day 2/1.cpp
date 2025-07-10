# include <iostream>
using namespace std;

void reachHome(int src , int dest)
{
   cout<< "Source" << src <<"   "<< "destination" << dest <<endl;

    if( src == dest)               //--> Base case.
    {
        cout<< "Pouch Gaya" <<endl;
        return;
    }

    src++;                  // --> Processing -- 1 step aage bad jao.
    reachHome(src , dest);  // --> recursive call.
}


int main()
{
    int src = 1;
    int dest = 10;

    cout << endl;

    reachHome(src , dest);
    
    return 0;
}