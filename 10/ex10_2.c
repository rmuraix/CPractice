#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4];
   int i, j, ai;

   printf("a="); fgets(a, 4, stdin);

   ai = atoi(a);

   for(i = 1; i <= ai; i++){
      for(j = 1; j <= i; j++){         
         printf("%3d", j);
      }
      printf("\n");
   }

   return 0;
}