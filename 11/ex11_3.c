#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4], y[10];
   double a[10], ave;
   int yi, i, sum;

   for(i = 0;i < 10; i++){
      printf("No.%d=", i + 1); fgets(x, 4, stdin);

      a[i] = atoi(x);
   }

   printf("Value="); fgets(y, 10, stdin);

   yi = atoi(y);

   sum = 0;

   for(i = 0;i < yi; i++){
      sum = sum + a[i];
   }

   ave = (double)sum / yi;

   printf("Sum(No.1-No.%d):%d\n", yi, sum);
   printf("Ave:%.2f\n", ave);

   return 0;
}