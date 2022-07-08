#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3], b[3];
   int ai, bi, i, sum, ans;

   printf("a="); fgets(a, 3, stdin);
   printf("b="); fgets(b, 3, stdin);

   ai = atoi(a);
   bi = atoi(b);

   i = 0;
   sum = ai + bi;

   do{
      ans = sum + i;

      printf("%d+%d=%d\n", sum, i, ans);

      i = i + 1;
   }while(i < 10);


   return 0;
}
