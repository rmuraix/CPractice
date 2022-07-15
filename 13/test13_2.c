#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   double ave, filter;
   int ai[5], i, sum;

   for(i =0; i < 5; i++){
      printf("ID%d:", i + 1); fgets(a, 10, stdin);
      ai[i] = atoi(a);
   }

   sum = 0;

   for(i =0; i < 5; i++){
      sum = sum + ai[i];
   }

   ave = (double)sum / 5;

   printf("Average:%.1lf\n", ave);

   for(i =0; i < 5; i++){
      if(ave > ai[i]){
         printf("ID%d\n", i + 1);
      }
   }

   return 0;
}