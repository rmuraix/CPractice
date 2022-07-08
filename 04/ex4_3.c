#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char hen[10], hankei[10];
   double s, e, diff;
   int heni, hankeii;

   printf("Hen   [cm]:"); fgets(hen, 10, stdin);
   printf("Hankei[cm]:"); fgets(hankei, 10, stdin);

   heni = atoi(hen);
   hankeii = atoi(hankei);

   s = heni * heni;
   e = hankeii * hankeii * 3.14;
   diff = s - e;

   printf("S=%d*%d[cm^2]\n", heni, heni);
   printf("E=%d*%d*3.14[cm^2]\n", hankeii, hankeii);
   printf("S-E=%.2f[cm^2]\n", diff);

   return 0;
}
