#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4], y[4];
   int xi, yi, a, b;

   printf("a=");fgets(x, 4, stdin);
   printf("b=");fgets(y, 4, stdin);

   xi = atoi(x);
   yi = atoi(y);

   a = xi * 2;
   b = yi * 2;

   printf("%d*2=%d\n", xi, a);
   printf("%d*2=%d\n", yi, b);

   return 0;
}
