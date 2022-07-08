#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int ai, calc;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   calc = ai % 2;

   if(calc == 0){
      printf("Even number\n");
   }
   else{
      printf("Odd number\n");
   }

   return 0;
}
