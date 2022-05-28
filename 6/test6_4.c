#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   double af, bf, calc;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);

   af = atof(a);
   bf = atof(b);

   if(af < bf){
      calc = af + bf;
      printf("%.2f+%.2f=%.2f\n", af, bf, calc);
   }
   else{
      calc = af * bf;
      printf("%.2f*%.2f=%.2f\n", af, bf, calc);
   }

   return 0;
}
