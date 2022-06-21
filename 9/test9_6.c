#include<stdio.h>
#include<stdlib.h>

int main(void){
   char a[10], b[10];
   double af, bf, sum;
   int i;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);

   af = atof(a);
   bf = atof(b);

   sum = af + bf;

   if(sum >= 12.6){
      for(i = 1; i <= 10; i++){
         printf("Neko\n");
      }
   }
   else if(sum >= 10.3){
      for(i = 1; i <= 8; i++){
         printf("Inu\n");
      }
   }
   else{
      printf("%.1f+%.1f=%.1f\n", af, bf, sum);
   }

   return 0;
}

