#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   if(ai > bi){
      printf("1st\n");
   }
   else if(ai < bi){
      printf("2nd\n");
   }
   else{
      printf("same\n");
   }

   return 0;
}
