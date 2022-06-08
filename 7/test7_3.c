#include<stdio.h>

int main(void)
{
   int i, x;

   i = 0;
   x = 0;

   do{
      x = 2 * i + 1;

      printf("No.%d\n", x);

      i += 1;
   }while(x < 9);

   return 0;
}
