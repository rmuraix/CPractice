#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int i, j, ai;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   for(i = 1; i <= 4; i++){
      for(j = 1; j <= ai; j++){         
         if(i == 1){
            printf("T ");
         }
         else if(i == 2){
            printf("O ");
         }
         else if(i == 3){
            printf("R ");
         }
         else{
            printf("A ");
         }
      }
      printf("\n");
   }

   return 0;
}