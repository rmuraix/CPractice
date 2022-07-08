#include<stdio.h>
#include<stdlib.h>

struct data{
   int id, en, math;
};

int main(void)
{
   struct data test;
   char x[10], y[10], z[10];
   double ave;

   printf("ID:");fgets(x, 10, stdin);
   printf("English:");fgets(y, 10, stdin);
   printf("Math:");fgets(z, 10, stdin);

   test.id = atoi(x);
   test.en = atoi(y);
   test.math = atoi(z);

   ave = (double)(test.en + test.math) / 2;

   printf("ID[%d]:%.1f\n", test.id, ave);

   return 0;
}