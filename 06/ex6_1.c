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

   c = ai * bi;

   if(10 <= c && c < 30){
      printf("%d*%d=%d\n", ai, bi, c);
      printf("ok\n");
   }
   else{
      printf("error\n");
   }

   return 0;
}
