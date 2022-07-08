#include<stdio.h>
#include<stdlib.h>

int main(void){
   char a[10];
   int ai, h_ai, i;

   printf("Book="); fgets(a, 10, stdin);

   ai = atoi(a);

   h_ai = ai / 2;

   for(i = 0; ai != 0; i++){
      if(ai > h_ai){
         printf("%d-->3\n", ai);
         ai -= 3;
      }
      else if(ai >= 6){
         printf("%d-->6\n", ai);
         ai -= 6;
      }
      else{
         printf("%d-->%d\n", ai, ai);
         ai = 0;
      }
   }
   printf("Count:%d\n", i);

   return 0;
}
