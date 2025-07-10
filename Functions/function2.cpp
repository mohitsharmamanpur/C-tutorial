#include<iostream>                 //calculating 3 powers.
#include<math.h>
using namespace std;

int power(int a,int b)
{
    int ans = 0;
    for(int i=1;i<=b;i++)
    {
        ans = ans*a;
    }
    return ans;
}

int main()
{
    int a,b;
    cin>>a>>b;
    int answer = pow(a,b);
    {
    cout<<"answer is"<<answer<<endl;
    }

     int c,d;
    cin>>c>>d;
    int ans = pow(c,d);
    {
    cout<<"answer is"<<ans<<endl;
    }

     int e,f;
    cin>>e>>f;
    int answ = pow(e,f);
    {
    cout<<"answer is"<<answ<<endl;
    }
    return answer;
}
