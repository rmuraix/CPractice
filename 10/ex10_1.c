#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3];
   int ai, i, j, k;

   printf("a="); fgets(a, 3, stdin);

   ai = atoi(a);

   for(i = 1; i <= ai; i++){
      for(j = 1; j <= ai; j++){
         k = i * j;
         
         printf("%4d", k);
      }
      printf("\n");
   }

   return 0;
}