#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4], y[4], z[4], v[4];
   int xi, yi, zi, vi, a;

   printf("x=");fgets(x, 4, stdin);
   printf("y=");fgets(y, 4, stdin);
   printf("z=");fgets(z, 4, stdin);
   printf("v=");fgets(v, 4, stdin);


   xi = atoi(x);
   yi = atoi(y);
   zi = atoi(z);
   vi = atoi(v);

   a = (xi * yi) + (zi * vi);


   printf("(%d*%d)+(%d*%d)=%d\n", xi, yi, zi, vi, a);

   return 0;
}
