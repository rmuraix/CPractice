#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[3];
   int i, j, xi;

   printf("x="); fgets(x, 3, stdin);

   xi = atoi(x);

   for(i = 1; i <= xi; i++){
      for(j = 1; j <= xi; j++){         
         printf("*");
      }
      printf("\n");
   }

   return 0;
}