# include <iostream>
using namespace std;

void print(int arr[] , int n)
{
    cout<<"Size of array is= "<<" "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<< arr[i];
    }
    cout<<endl;
}

bool linearSearch(int arr[] , int size , int key)
{
   print(arr , size);

    if(size  == 0)
    return false;

    if(arr[0] == key)
    return true;

    else{}

    int remainingPart = linearSearch(arr+1 , size-1 , key);
    return remainingPart;
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;
    int key = 3;

   bool ans = linearSearch(arr , size , key);

   if(ans)
   {
    cout<< "key is Present" <<endl;
   }
   else
   {
    cout<< "key is absent" <<endl;
   }
    
    return 0;
}