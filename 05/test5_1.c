#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[10];
   int xi;

   printf("a="); fgets(x, 10, stdin);

   xi = atoi(x);

   if(xi > 10){
      printf("Yes\n");
   }

   return 0;
}
