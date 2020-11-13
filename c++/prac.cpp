#include<stdio.h>
int main()
{

int x=60, y=20, add,sub,mul,div,mod;
   add = x+y;
   sub = x-y;
   mul = x*y;
   div = x/y;
   mod = x%y;
   printf("Addition of  x, y is : %d\n", add);
   printf("Subtraction of  x, y is : %d\n", sub);
   printf("Multiplication of  x, y is : %d\n", mul);
   printf("Division of  x, y is : %d\n", div);
   printf("Modulus of  x, y is : %d\n", mod);
   
    int x=60;
   printf("x++ gives : %d\n", x++);  // 60 is displayed then, x is //increased to 61.
   printf("++x gives : %d\n", ++x); // Initially, x = 61. It is increased //to 62 then, it is displayed.
   
   int x=60,y=20;
   if (x == y)
   {
       printf("x and y are equal");
   }
   else
   {
       printf("x and y are not equal");
   }
}

