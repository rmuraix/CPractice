#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int ai;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   if(ai == 15){
      printf("Yes\n");
   }

   return 0;
}
