#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   double c, e;
   int ai, bi;

   printf("a="); fgets(a, 10, stdin);
   printf("b="); fgets(b, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);

   c = ai * 1.3;
   e = (c - ai) * bi;

   printf("siire:%d --> urine:%.0lf\n", ai, c);
   printf("kosuu:%d\n", bi);
   printf("rieki[(%.0lf-%d)*%d]:%.0lf [EN]\n", c, ai, bi, e);

   return 0;
}
