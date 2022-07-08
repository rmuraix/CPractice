#include<stdio.h>
#include<stdlib.h>

struct yasai{
   int lettuce, cabbage;
};

int main(void)
{
   struct yasai store[3];
   char let[10], cab[10];
   double xf, yf;
   int xi, yi, g, i;

   for(i = 0; i < 3; i++){
      printf("Store[%d]\n", i + 1);

      printf(" lettuce:"); fgets(let, 10, stdin);
      printf(" Cabbage:"); fgets(cab, 10, stdin);

      store[i].lettuce = atoi(let);
      store[i].cabbage = atoi(cab);
   }

   printf("\n");

   for(i = 0; i < 3; i++){
      xi = store[i].lettuce * 150;
      yi = store[i].cabbage * 100;
      g = xi + yi;

      printf("Store[%d]:%d[EN]\n", i + 1, g);
      printf(" %d[EN](Lettuce)\n", xi);
      printf(" %d[EN](Cabbage)\n", yi);
   }

   xi = 0;
   yi = 0;

   for(i = 0; i < 3; i++){
      xi = xi + store[i].lettuce;
      yi = yi + store[i].cabbage;
   }

   xf=(double)xi/3;
   yf=(double)yi/3;

   printf("\n");
   printf("Average\n");

   if(xf > yf){
      printf(" Lettuce:%.1f*\n", xf);
      printf(" Cabbage:%.1f\n", yf);
   }
   else if(xf < yf){
      printf(" Lettuce:%.1f\n", xf);
      printf(" Cabbage:%.1f*\n", yf);
   }
   else{
      printf(" Lettuce:%.1f\n", xf);
      printf(" Cabbage:%.1f\n", yf);
   }

   return 0;
}