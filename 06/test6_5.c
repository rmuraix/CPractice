#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10], c[10];
   int ai, bi, ci, calc;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);
   printf("c="); fgets(c, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);
   ci = atoi(c);

   calc = ai + bi + ci;

   if(calc >= 50){
      printf("%d+%d+%d=%d\n", ai, bi, ci, calc);
   }
   else if(calc >= 40){
      printf("error\n");
   }
   else if(calc >= 30){
      printf("ok\n");
   }else{
      calc = ai * bi * ci;
      printf("%d*%d*%d=%d\n", ai, bi, ci, calc);
   }

   return 0;
}
