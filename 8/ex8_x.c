#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   int ai, bi, sum;

   printf("500EN:"); fgets(a, 10, stdin);
   printf("200EN:"); fgets(b, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);

   sum = 500 * ai + 200 * bi;

   printf("total:%dEN\n", sum);

   if(sum < 2000){
      printf("more\n");
   }
   else if(sum <= 3000){
      printf("ok\n");
   }
   else{
      printf("over\n");
   }

   return 0;
}