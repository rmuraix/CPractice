#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   double n, ak, aj;
   int i, gk, gj, k[3], j[3];

   for(i = 0; i < 3; i++){
      printf("Car%d:\n", i + 1);
      printf("Kyori(km):"); fgets(a, 10, stdin); k[i] = atoi(a);
      printf("Jikan(h):"); fgets(b, 10, stdin); j[i] = atoi(b);
   }

   printf("---Hayasa---\n");

   for(i = 0; i < 3; i++){
      n = (double)k[i] / j[i];
      printf("Car%d:%.2lf[km/h]\n", i + 1, n);
   }

   gk = 0;
   gj = 0;

   for(i = 0; i < 3; i++){
      gk = gk + k[i];
      gj = gj + j[i];
   }

   ak = (double)gk / 3;
   aj = (double)gj / 3;

   printf("---Average---\n");
   printf("Kyori(3 cars)=%.2lf[km]\n", ak);
   printf("Jikan(3 cars)=%.2lf[h]\n", aj);

   return 0;
}