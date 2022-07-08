#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   double d;
   int c, ai, bi;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   c = ai + bi;
   d = (double)ai / bi;

   printf("c: %d\n", c);
   printf("d: %.2lf\n", d);

   return 0;
}
