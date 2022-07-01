#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char a[3];
   int x[3], i, ans;

   ans = 0;

   for(i = 0; i < 3; i++){
      printf("No.%d=", i + 1);fgets(a, 3, stdin);

      x[i] = atoi(a);

      ans = ans + x[i];
   }

   printf("Total:%d+%d+%d=%d\n", x[0], x[1], x[2], ans);

   return 0;
}