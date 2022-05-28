#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   double af;

   printf("a="); fgets(a, 10, stdin);

   af = atof(a);

   if(3.2 <= af && af < 4.8){
      printf("Hello\n");
   }

   return 0;
}
