#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char jp[5], math[5], sci[5], social[5], en[5];
   double aveMSiE, aveJSoE, aveAll;
   int jpi, mathi, scii, sociali, eni;

   printf("Kokugo :"); fgets(jp, 5, stdin);
   printf("Suugaku:"); fgets(math, 5, stdin);
   printf("Rika   :"); fgets(sci, 5, stdin);
   printf("Syakai :"); fgets(social, 5, stdin);
   printf("Eigo   :"); fgets(en, 5, stdin);

   jpi = atoi(jp);
   mathi = atoi(math);
   scii = atoi(sci);
   sociali = atoi(social);
   eni = atoi(en);

   aveMSiE = (mathi + scii + eni) / 3.0;
   aveJSoE = (jpi + sociali + eni) / 3.0;
   aveAll = (mathi + scii + eni + jpi + sociali) / 5.0;

   printf("Heikinn(Su,R,E) :%.1f[Ten]\n", aveMSiE);
   printf("Heikinn(K,Sya,E):%.1f[Ten]\n", aveJSoE);
   printf("Heikinn(K,Su,R,Sya,E):%.1f[Ten]\n", aveAll);

   return 0;
}
