#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi, i, even;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   i = 1;

   while(i < 9){
      even = i % 2;
      if(even == 1){
         printf("No%d:%d\n", i, ai);
      }
      else{
         printf("No%d:%d\n", i, bi);
      }
      i += 1;
   }

   return 0;
}
