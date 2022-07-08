#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   double af, bf, c, sum, j;
   int i;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);

   af = atof(a);
   bf = atof(b);

   sum = af + bf;

   i = 1;

   while(i <= 4){
      j = i % 2;
      if(j == 1){
         c = sum / af;

         printf("%.3f/%.3f=%.3f\n", sum, af, c);
      }
      else{
         c = sum / bf;

         printf("%.3f/%.3f=%.3f\n", sum, bf, c);
      }
      i += 1;
   }

   return 0;
}