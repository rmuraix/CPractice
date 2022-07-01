#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[4];
   int x[4], i, ans;

   for(i = 0; i < 4; i++){
      printf("No.%d:", i + 1);fgets(a, 4, stdin);

      x[i] = atoi(a);
   }

   printf("[Odd number]\n");

   ans = 0;

   for(i = 0; i < 4; i++){
      if(x[i] % 2 == 1){
         ans += x[i];
      }
   }

   printf("Total:%d\n", ans);

   return 0;
}