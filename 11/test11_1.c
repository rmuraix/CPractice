#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int x[5], i;

   for(i = 0; i < 5; i++){
      printf("No.%d=", i + 1);fgets(a, 10, stdin);

      x[i] = atoi(a);
   }

   for(i = 0; i < 5; i++){
      printf("No.%d:%d\n", i + 1, x[i]);
   }

   return 0;
}