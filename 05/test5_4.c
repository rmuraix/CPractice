#include<stdio.h>
#include<stdlib.h>

int main(void)
{
   char jp[10], en[10], math[10];
   double ave, jpf, enf, mathf;

   printf("English="); fgets(en, 10, stdin);
   printf("Math="); fgets(math, 10, stdin);
   printf("Japanese="); fgets(jp, 10, stdin);

   enf = atof(en);
   mathf = atof(math);
   jpf = atof(jp);

   ave = (enf + mathf + jpf) / 3;

   printf("(%.0f+%.0f+%.0f)/3=%.1f\n", enf, mathf, jpf, ave);

   if(ave >= 65.2){
      printf("Congratulations\n");
   }
   else{
      printf("Fight\n");
   }

   return 0;
}
