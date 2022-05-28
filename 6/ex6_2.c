#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[10];
   int ai;

   printf("(1)sunny,(2)cloudy,(3)rainy\n");

   printf("Number:"); fgets(a, 10, stdin);

   ai = atoi(a);

   if(ai == 1){
      printf("today:sunny\n");
   }
   else if(ai == 2){
      printf("today:cloudy\n");
   }
   else if(ai == 3){
      printf("today:rainy\n");
   }
   else{
      printf("error\n");
   }

   return 0;
}
