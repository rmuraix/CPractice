#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int i, ai;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   i = 0;

   if(ai >= 20){
      while(i < 15){
         printf("apple\n");

         i = i + 1;
      }
   }
   else if(ai >= 10){
      while(i < 7){
         printf("peach\n");

         i = i + 1;
      }
   }
   else{
      printf("mandarin\n");
   }

   return 0;
}