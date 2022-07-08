#include<stdio.h>
#include<stdlib.h>

struct data{
   int id, age;
};

int main(void)
{
   struct data test[5];
   char x[7], y[4];
   int i, idis, ageis;

   for(i = 0; i < 5; i++){
      printf("ID number(%d):", i + 1);fgets(x, 7, stdin);
      printf("Age(%d):", i + 1);fgets(y, 4, stdin);

      test[i].id = atoi(x);
      test[i].age = atoi(y);
}

   printf("------\n");

   for(i = 0; i < 5; i++){

      idis = test[i].id % 2;
      ageis = test[i].age % 2;

      if(idis == 0 && ageis == 0){
         printf("ID number(%d)-->%d,Age(%d)-->%d\n", i + 1, test[i].id, i + 1, test[i].age);
   }
}

   return 0;
}