# include <iostream>
using namespace std;

int main()
{

    int arr[10] = {23,122,43,67};

    cout<<"Address of first memory block is"<< arr <<endl;   //--> address print ho jaiga.
    cout<< arr[0] <<endl;
    cout<<"Address of first memory block is"<< &arr[0] <<endl;

    cout<<"4th= " << *arr <<endl;                            //--> address ki value print ho jaige.
    cout<<"5th= " << *arr + 1 <<endl;
    cout<<"6th= " << '*arr' + 1 <<endl;         //--> arr->first location, +1, matlab 2nd location..so 
    cout<<"7th= " << *(arr + 1) <<endl;         // *(arr+1) 2nd address ki value print ho jaige.
    cout<<"8th= " << *(arr) + 1 <<endl;        // 5th and 8th are same case.
    cout<<"9th= " << *arr + 2 <<endl;
    cout<<"10th= "<< *arr + 50 <<endl;

    cout<<"11= "<< arr[2] <<endl;
    cout<<"12= "<< *(arr+2) <<endl;


    int i=3;
    cout<< arr[i] <<endl;           //---> we have a formulla--> arr[i] = *(arr+i)
    cout<< i[arr] <<endl;            //                 i[arr] = *(i+arr)



   int temp[10] = {1,2};
   cout<< "value= "<<sizeof(temp) <<endl;
   cout<< "value= "<< sizeof(*temp)<<endl;
   cout<< "value= "<< sizeof(&temp)<<endl;


   int *ptr = &temp[0];
   cout<< sizeof(ptr) <<endl;
   cout<<sizeof(*ptr) <<endl;
   cout<< sizeof(&ptr) <<endl;




   int a[20] = {1,2,3,4,5};

   cout<<"-->"<< a <<endl;     // address print hoga
   cout<<"-->"<< *a <<endl;    // address m jo value h, vo print hogi.
   cout<<"-->"<< &a <<endl;    // adress print hoga.

   int *p = &a[0];

   cout<<"-->"<< p <<endl;     // address print hoga
   cout<<"-->"<< *p <<endl;    // address m jo value h, vo print hogi.
   cout<<"-->"<< &p <<endl;    // adress print hoga.



   int brr[10];

  // brr = brr + 1;    ------> error wil come.

 int *q = &brr[0];

 cout<< q <<endl;
 q = q + 1;
 cout<< q <<endl;


 return 0; 
}