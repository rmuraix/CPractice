#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4], y[4];
   int answer, xi, yi;

   printf("x="); fgets(x, 4, stdin);
   printf("y="); fgets(y, 4, stdin);

   xi = atoi(x);
   yi = atoi(y);

   answer = xi * (yi + xi);

   printf("%d*(%d+%d)=%d\n", xi, yi, xi, answer);

   return 0;
}
