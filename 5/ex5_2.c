#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int ai, b;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   b = ai + 10;

   if(b < 55){
      printf("red\n");
   }
   else{
      printf("green\n");

   }

   return 0;
}
