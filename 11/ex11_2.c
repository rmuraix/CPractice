#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4], y[10];
   int i, xi;
   double sum, ave, a[10];

   printf("Count:"); fgets(x, 4, stdin);

   xi = atoi(x);

   for(i = 0; i < xi; i++){
      printf("No.%d:", i + 1); fgets(y, 10, stdin);
      a[i] = atof(y);
   }

   sum = 0;

   for(i = 0; i < xi; i++){
      sum = sum + a[i];
      
   }

   ave = sum / xi;

   printf("Sum:%.2f\n", sum);
   printf("Ave:%.2f/%d=%.2f\n", sum, xi, ave);

   return 0;
}