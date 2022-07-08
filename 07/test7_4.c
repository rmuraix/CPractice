#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4], b[4];
   int ai, bi, i, sum, ans;

   printf("a="); fgets(a, 4, stdin);
   printf("b="); fgets(b, 4, stdin);

   ai = atoi(a);
   bi = atoi(b);

   i = 0;
   if(ai > bi){
      do{
         printf("apple\n");

         i = i + 1;
      }while(i < bi);
   }
   else{
      do{
         printf("peach\n");

         i += 1;
      }while(i < ai);
   }

   return 0;
}
