#include <stdio.h>

void sum(int a, int b);
void compare(int a, int b);
void _for();
void _while();
int disp();

void main(){
   int a=4;
   int b=5;

   sum(a,b);
   compare(a,b);
   _for();
   _while();
   int c=disp();
   printf("%i\n",c);
   printf("%i\n",&c);


};