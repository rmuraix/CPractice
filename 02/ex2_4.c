#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[10], y[10];
   int xi, yi, a, b, c, d;

   printf("A:");fgets(x, 10, stdin);
   printf("B:");fgets(y, 10, stdin);

   xi = atoi(x);
   yi = atoi(y);

   a = xi + yi;
   b = xi - yi;
   c = xi * yi;
   d = a + b + c;

   printf("%d+%d=%d\n", xi, yi, a);
   printf("%d-%d=%d\n", xi, yi, b);
   printf("%d*%d=%d\n", xi, yi, c);
   printf("(%d)+(%d)+(%d)=%d\n", a, b, c, d);

   return 0;
}
