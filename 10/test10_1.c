#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int ai, i;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   for(i = 1; i <= ai; i += 2){
      printf("odd:%d\n", i);
   }

   return 0;
}