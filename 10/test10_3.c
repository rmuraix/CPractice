#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3];
   int i, j, ai;

   printf("kaisuu="); fgets(a, 3, stdin);

   ai = atoi(a);

   for(i = 1; i <= ai; i++){
      for(j = 1; j <= i; j++){         
         printf("*");
      }
      printf("\n");
   }

   return 0;
}