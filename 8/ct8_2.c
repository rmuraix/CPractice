#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3], b[3];
   int ai, bi, d, i;

   printf("Start:"); fgets(a, 3, stdin);
   printf("End  :"); fgets(b, 3, stdin);

   ai = atoi(a);
   bi = atoi(b);

   printf("Range%d-%d\n",ai, bi);

   i = ai;

   while(i <= bi){
      printf("%dmod3-->", i);

      d = i % 3;

      if(d == 0){
         printf("OK\n");
      }
      else if(d == 1){
         printf("ONE\n");
      }
      else{
         printf("TWO\n");
      }

      i = i + 1;
   }

   return 0;
}