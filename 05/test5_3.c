#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi, remainder, sum, product;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   sum = ai + bi;
   remainder = sum % 10;

   printf("Amari:%d\n", remainder);

   if(remainder < 5){
      printf("a+b=%d\n", sum);
   }
   else{
      product = ai * bi;

      printf("a*b=%d\n", product);
   }

   return 0;
}
