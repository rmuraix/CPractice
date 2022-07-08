#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char r[10];
   double n;
   int ri;

   printf("r="); fgets(r, 10, stdin);

   ri = atoi(r);

   n = 2 * ri * 3.14;

   printf("2*%d*3.14=%.3lf [cm]\n", ri, n);

   return 0;
}
