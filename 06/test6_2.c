#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   double af;

   printf("result="); fgets(a, 10, stdin);

   af = atof(a);

   if(af >= 90){
      printf("excellent\n");
   }
   else if(af >= 60){
      printf("good\n");
   }
   else{
      printf("bad\n");
   }

   return 0;
}
