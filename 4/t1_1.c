#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   int ai, bi, c;

   printf("Tate:"); fgets(a, 10, stdin);
   printf("Yoko:"); fgets(b, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);

   c = (ai + bi) * 2;

   printf("Syuuicyou[(%dm+%dm)*2]:%dm\n", ai, bi, c);

   return 0;
}
