#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi, c;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   if(ai > bi){
      c = ai * 3;
      printf("a*3=%d\n", c);
   }
   else{
      c = ai + bi;
      printf("a+b=%d\n", c);
   }

   return 0;
}
