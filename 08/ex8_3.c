#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   int ai, bi, count, i;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);

   i = 1;

   while(i < 9){
      count = i % 2;

      if(count == 0){
         printf("No.%d:%d\n", i, ai);
      }
      else{
         printf("No.%d:%d\n", i, bi);
      }

      i = i + 1;
   }

   return 0;
}