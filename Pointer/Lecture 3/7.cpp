# include <iostream>
using namespace std;

int main()
{

   int i = 5;
   int *p = &i;
   int **p2 = &p;

   cout<<"Printing p= "<< p <<endl;
   cout<<"Address of p= " << &p <<endl;
   cout<<"Address of p= " << *p <<endl;

   cout<<"Printing *p= "<< *p2 <<endl;

   cout<< i <<endl;
   cout<< *p <<endl;                         // for axcessing 5.
   cout<< **p2 <<endl;

   cout<< &i <<endl;
   cout<< p <<endl;                          // for axcessing value inside ptr.
   cout<< *p2 <<endl;

   cout<< &p <<endl;
   cout<< p2 <<endl;

    return 0;
}