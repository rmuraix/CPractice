#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char k[10], j[10];
   double kf, jf, s;

   printf("Kyori(km):"); fgets(k, 10, stdin);
   printf("Jikan(km/h)"); fgets(j, 10, stdin);

   kf = atof(k);
   jf = atof(j);

   s = kf / jf;

   printf("Hayasa(km/h)=%.3f", s);

   if(s > 60){
      printf("[BAD]\n");

   }
   else{
      printf("[GOOD]\n");
   }

   return 0;
}