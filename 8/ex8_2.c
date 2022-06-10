#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi, x;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   x = ai % bi;

   if(x == 0){
      printf("ok\n");
   }
   else if(x >= 5){
      printf("red\n");
   }
   else if(x >= 3){
      printf("green\n");
   }
   else{
      printf("blue\n");
   }

   return 0;
}