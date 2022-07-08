#include<stdio.h>
#include<stdlib.h>

struct kamoku{
   int ec, st, re;
};

int main(void)
{
   struct kamoku id1, id2;
   char e[5], s[5], r[5];
   int esum, ssum, rsum;
   double eave, save, rave;

   printf("ID:1\n");

   printf("Economics :");fgets(e, 5, stdin);
   printf("Statistics:");fgets(s, 5, stdin);
   printf("Religion  :");fgets(r, 5, stdin);

   id1.ec = atoi(e);
   id1.st = atoi(s);
   id1.re = atoi(s);

   printf("ID:2\n");

   printf("Economics :");fgets(e, 5, stdin);
   printf("Statistics:");fgets(s, 5, stdin);
   printf("Religion  :");fgets(r, 5, stdin);

   id2.ec = atoi(e);
   id2.st = atoi(s);
   id2.re = atoi(s);

   esum = id1.ec + id2.ec;
   ssum = id1.st + id2.st;
   rsum = id1.re + id2.re;

   eave = (double)esum / 2;
   save = (double)ssum / 2;
   rave = (double)rsum / 2;

   printf("\n");

   printf("Economics  [Total:%d(Average:%.1f)]\n", esum, eave);
   printf("Statistics [Total:%d(Average:%.1f)]\n", ssum, save);
   printf("Statistics [Total:%d(Average:%.1f)]\n", rsum, rave);

   return 0;
}