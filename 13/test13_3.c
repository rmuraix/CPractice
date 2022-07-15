#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char h[10], w[10];
   double hf[4], wf[4], bmi;
   int i;

   for(i =0; i < 4; i++){
      printf("ID%d\n", i + 1);
      printf("height(m)"); fgets(h, 10, stdin);
      printf("weight(kg)"); fgets(w, 10, stdin);

      hf[i] = atof(h);
      wf[i] = atof(w);
   }

   for(i =0; i < 4; i++){
      bmi = wf[i] / ( hf[i] * hf[i]);

      printf("ID%d:BMI=%.2lf\n", i + 1, bmi);
   }

   return 0;
}