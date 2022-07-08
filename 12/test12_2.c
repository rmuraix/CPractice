#include<stdio.h>
#include<stdlib.h>

struct data{
   int id, clno;
};

int main(void)
{
   struct data test[4];
   char x[5], y[7];
   int i;

   for(i = 0; i < 4; i++){
      printf("ID[%d]:", i + 1);fgets(x, 5, stdin);
      printf("Class code[%d]:", i + 1);fgets(y, 7, stdin);

      test[i].id = atoi(x);
      test[i].clno = atoi(y);
}

   printf("\n");

   for(i = 0; i < 4; i++){
      printf("ID[%d]:%d, Class code:%d\n", i + 1, test[i].id, test[i].clno);
}

   return 0;
}