#include<stdio.h>
#include<stdlib.h>

struct data{
   int id, s1, s2, s3;
};

int main(void)
{
   struct data test[4];
   char w[9], x[5], y[5], z[5];
   double ave[3];
   int i, a, b, c;

   for(i = 0; i < 4; i++){
      printf("Number[%d]:", i + 1);fgets(w, 9, stdin);
      printf("Kamoku1=");fgets(x, 5, stdin);
      printf("Kamoku2=");fgets(y, 5, stdin);
      printf("Kamoku3=");fgets(z, 5, stdin);

      test[i].id = atoi(w);
      test[i].s1 = atoi(x);
      test[i].s2 = atoi(y);
      test[i].s3 = atoi(z);
}

   a = 0.0;
   b = 0.0;
   c = 0.0;

   for(i = 0; i < 4; i++){
      a += test[i].s1;
      b += test[i].s2;
      c += test[i].s3;
}

   ave[0] = (double)a / 4;
   ave[1] = (double)b / 4;
   ave[2] = (double)c / 4;

   printf("Number:");

   for(i = 0; i < 4; i++){
      printf("%d,", test[i].id);
}

   printf("\n");

   for(i = 0; i < 3; i++){
       printf("Average Kamoku%d:%.1f\n", i + 1, ave[i]);
}
  

   return 0;
}