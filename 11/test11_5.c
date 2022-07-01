#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3];
   int i, j, x[10];

   printf("Roop:");fgets(a, 3, stdin);

   i = atoi(a);

   for(j = 0; j < i; j++){
      printf("No.%d:", j + 1);fgets(a, 3, stdin);

      x[j] = atoi(a);
   }

   printf("Reverse:\n");

   for(j = i - 1; j >= 0; j--){
      printf("No.%d:%d\n", j + 1, x[j]);
   }

   return 0;
}