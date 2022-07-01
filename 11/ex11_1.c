#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[4];
   int a[4], i, sum;
   double ave;

   for(i = 0; i < 4; i++){
      printf("No.%d=", i + 1); fgets(x, 4, stdin);

      a[i] = atoi(x);
   }

   sum = 0;

   for(i = 0; i < 4; i++){
      sum = sum + a[i];
   }

   ave = (double)sum / 4;

   printf("Total:%d+%d+%d=%d\n", a[0], a[1], a[2], sum);
   printf("Average:%d/4=%.2f\n", sum, ave);

   return 0;
}