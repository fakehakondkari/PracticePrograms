#include <stdio.h>

int main () {

   int  i = 20;   /* actual variable declaration */
   int  *iptr;        /* pointer variable declaration */
   iptr = &i;  /* store address of i in pointer variable*/
   int j = *iptr; /* store variable stored in location pointed by iptr* in j /

   /* address stored in pointer variable */
   printf("Address stored in ip variable: %x\n", iptr );

   /* access the value using the pointer */
   printf("Value of *ip variable: %d\n", j );

   return 0;
}
