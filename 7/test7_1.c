#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4];
   int ai, i;

   printf("a="); fgets(a, 4, stdin);

   ai = atoi(a);

   i = 0;

   while(i < ai){
      printf("Neko\n");

      i = i + 1;
   }

   return 0;
}
