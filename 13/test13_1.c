#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   int ai[7], filter, i;
   char a[6];

   for(i = 0; i < 7; i++){
      printf("in%d=", i + 1); fgets(a, 6, stdin);
      ai[i] = atoi(a);
   }

   for(i = 0; i < 7; i++){
      filter = ai[i] % 2;

      if(filter == 0){
         printf("%4d\n", ai[i]);
      }
   }

   return 0;
}