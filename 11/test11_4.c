#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3];
   int x[4], i, diff, plus;

   for(i = 0; i < 4; i++){
      printf("No.%d:", i + 1);fgets(a, 3, stdin);

      x[i] = atoi(a);
   }

   printf("[Ten]:\n");

   for(i = 0; i < 4; i++){
      diff = 10 - x[i];
      plus = x[i] + diff;

      printf("No.%d:%d+%d=%d\n", i + 1, x[i], diff, plus);
   }

   return 0;
}