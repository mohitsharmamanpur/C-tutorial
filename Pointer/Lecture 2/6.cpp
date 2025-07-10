# include <iostream>       // now discuss about pointers with functions.
using namespace std;

void print(int *p)
{
    cout<< p <<endl;
    cout<< *p <<endl;
}

void update(int *p)
{
   // p = p +1;     ----> we can not do like this.

    *p = *p + 1;         // we can update the values at address, but cannot update address of pointer.
}


void getsum(int arr[] , int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    
  int value = 5;
    int *p = &value;

   print(p);

   cout<<"before= "<< *p <<endl;
   update(p);
   cout<<"after= "<< *p <<endl;   


   int arr[5] = {1,2,3,4,5};

   cout<< "Sum is= " << getsum(arr , 5) <<endl;

    return 0;
}