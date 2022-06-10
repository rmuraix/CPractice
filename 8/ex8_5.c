#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10], b[10];
   int i, ai, bi, ans;

   printf("atai="); fgets(a, 10, stdin);
   printf("bai ="); fgets(b, 10, stdin);

   ai = atoi(a);
   bi = atoi(b);

   i = 1;

   while(i <= bi){
      ans = ai * i;
      printf("%d*%d=%d\n", ai, i, ans);

      i = i + 1;
   }

   return 0;
}