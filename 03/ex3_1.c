#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   double x, bf;
   int ai;

   printf("X:"); fgets(a, 10, stdin);
   printf("Y:"); fgets(b, 10, stdin);

   ai = atoi(a);
   bf = atof(b);

   x = ai / bf;

   printf("%d/%.2lf=%.2lf\n", ai, bf, x);

   return 0;
}
