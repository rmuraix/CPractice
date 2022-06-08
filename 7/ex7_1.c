#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi, x, i;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   x = (ai + bi) % 2;

   i = 0;

   if(x == 0){
      do{
         printf("Neko\n");

         i += 1;
      }while(i < 5);
   }
   else{
      do{
         printf("Inu\n");

         i += 1;
      }while(i < 10);
   }

   return 0;
}