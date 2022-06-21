#include<stdio.h>
#include<stdlib.h>

int main(void){
   char a[10];
   int i, x, ai;

   printf("a="); fgets(a, 10, stdin);

   ai = atoi(a);

   for(i = 1; i <= ai; i++){
      x = i % 2;
      if(x == 0){
         printf("%d:even\n", i);
      }
      else{
         printf("%d:odd\n", i);
      }
   }

   return 0;
}

