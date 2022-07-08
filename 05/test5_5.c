#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char x[10], y[10];
   int xi, yi, sum, debt;

   printf("105yen_plate="); fgets(x, 10, stdin);
   printf("210yen_plate="); fgets(y, 10, stdin);

   xi = atoi(x);
   yi = atoi(y);

   sum = xi * 105 + yi * 210;

   printf("Total:%d\n", sum);

   if(sum > 3000){
      debt = sum - 3000;
      printf("debt:%d\n", debt);
   }
   else{
      debt = 0;
      printf("debt:%d\n", debt);
   }

   return 0;
}
