# include <iostream>
using namespace std;

int main(){
   
   int num = 5;       // num me 5 pda - phir num ko (a) me assign kar diya - phir a ko increment kr diya - 
   int a =  num;      // agar num ko print kerwayenge to 5 hi print hoga - kyuki (a) increment hua h naaki num.
   a++;

   cout<< num <<endl;


   int *p = &num;
   int b = *p;         //  same ..pehle jaisa ho raha h.
   b++;

   cout<< num <<endl;


   int *q = &num; 
   cout<<"Before value= "<< num <<endl;   // isme num to pointer(*q) me assign kar rahe h - phir pointer ko hi increment kar rahe h
   (*q)++;              // isliye value 5 se badkar 6 ho gai...
   cout<<"After value = "<< num <<endl;


   int *r = p;                            // copy one pointer to another pointer.
   cout<< p <<" - "<< r <<endl;
   cout<< *p <<" - "<< *r <<endl;



   int i = 3;
   int *t = &i;

   cout<< *t <<endl;
   *t = *t + 1;
   cout<< *t <<endl;

   cout<<"before"<< t <<endl;
   t = t + 1;
   cout<<"after"<< t <<endl;

    return 0;
}