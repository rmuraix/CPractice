#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char y[3];
   int i, j, yi, k, l;

   printf("y="); fgets(y, 3, stdin);

   yi = atoi(y);

   for(i = 1; i <= yi; i++){
      k = i - 1;
      l = yi - k;
      for(j = 1; j <= k; j++){
         printf("*");
      }

      printf(" ");

      for(j = 1; j <= l; j++){
         printf("*");
      }
      printf("\n");
   }

   return 0;
}