#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4];
   int ai, b;

   printf("age="); fgets(a, 4, stdin);

   ai = atoi(a);

   if(ai > 22){
      b = ai - 22;
      printf("%d years older\n", b);
   }
   else if(ai < 22){
      b = 22 - ai;
      printf("%d years younger\n", b);
   }
   else{
      printf("same\n");
   }

   return 0;
}
