#include<stdio.h>
#include<stdlib.h>

int main(void){
   char a[10], b[10];
   int ai, bi, i, x;

   printf("Neko:"); fgets(a, 10, stdin);
   printf("Inu:"); fgets(b, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);

   x = ai + bi;

   for(i = 1; i <= x; i++){
      if(i <= ai){
         printf("Neko\n");
      }
      else{
         printf("Inu\n");
      }
   }

   return 0;
}
