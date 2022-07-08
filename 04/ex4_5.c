#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4], y[4], z[5];
   int xi, yi, zi, add, multi, multi2;

   printf("x="); fgets(x, 4, stdin);
   printf("y="); fgets(y, 4, stdin);

   xi = atoi(x);
   yi = atoi(y);

   add = xi + yi;

   printf("x+y=%d\n", add);

   printf("z="); fgets(z, 5, stdin);

   zi = atoi(z);

   multi = add * zi;

   printf("%d*z=%d\n", add, multi);

   multi2 = multi * 2;

   printf("%d*2=%d\n", multi, multi2);

   return 0;
}
