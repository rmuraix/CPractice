#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10], c[10];
   double af, bf, cf, x, y;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);
   printf("c="); fgets(c, 10, stdin);


   af = atof(a);
   bf = atof(b);
   cf = atof(c);

   x = af * bf;
   y = x / cf;

   printf("%.3f*%.3f=%.3f\n", af, bf, x);
   printf("%.3f/%.3f=%.3f\n", x, cf, y);

   return 0;
}
