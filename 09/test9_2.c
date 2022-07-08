#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   int i, xi, g;
   char x[3];

   printf("a="); fgets(x, 3, stdin);

   xi = atoi(x);

   for(i = xi; i <= 10; i++){
      g = i % 2;
      if(g == 0){
        printf("even:%d\n", i);
      }
   }

   return 0;
}