#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3];
   int x[5], i;

   for(i = 0; i < 5; i++){
      printf("No.%d:", i + 1);fgets(a, 3, stdin);

      x[i] = atoi(a);
   }

   printf("Even number\n");

   for(i = 0; i < 5; i++){
      if(x[i] % 2 == 0){
         printf("%d:%d\n", i+1, x[i]);
      }
   }

   return 0;
}