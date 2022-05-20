#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10], c[10], d[10], e[10];
   double af, bf, cf, df, ef, g, h;

   printf("No.1="); fgets(a, 10, stdin);
   printf("No.2="); fgets(b, 10, stdin);
   printf("No.3="); fgets(c, 10, stdin);
   printf("No.4="); fgets(d, 10, stdin);
   printf("No.5="); fgets(e, 10, stdin);

   af = atof(a);
   bf = atof(b);
   cf = atof(c);
   df = atof(d);
   ef = atof(e);

   g = af + bf + cf + df + ef;
   h = g / 5.0;

   printf("Total(=%.2f+%.2f+%.2f+%.2f+%.2f):%.2f\n", af,bf, cf, df, ef, g);
   printf("Average(=%.2f/5):%.2f\n", g, h);

   return 0;
}
