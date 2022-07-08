#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int ai, i, time;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   i = 0;
   time = 0;

   if(ai > 30){
      while(ai != 0){
      time += 10;
         if(ai > 30){
            ai -= 5;
         }
         else{
            ai -= 2;
         }
   }

   printf("%dminutes\n", time);
}

   return 0;
}