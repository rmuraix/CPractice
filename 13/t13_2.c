#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4];
   int i, x[4], t;

   for(i = 0; i < 4; i++){
      printf("No.%d=", i + 1);  fgets(a, 4, stdin); x[i] = atoi(a);
   }

   printf("10ijyou:");

   t = 0;

   for(i = 0; i < 4; i++){
      if(x[i] >= 10){
         printf("%3d(No.%d)", x[i], i + 1);
         t = t + x[i];
      }
   }

   printf("\n");
   printf("Goukei(10ijyou):%d\n", t);

   return 0;
}