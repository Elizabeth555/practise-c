#include <stdio.h>
#include <math.h>

int main (void)
{

 float cash;
 int count = 0;
 int change;


 //asking change
 do {
     printf("how much change?\n");
     cash = GetFloat(); } while (cash < 0);

     change = (int) round(cash*100);

 count = (count + (change/25));
 change = change%25;


 count = (count + (change/10));
 change = change%10;

 count = (count + (change/5));
 change = change%5;

 count = (count+ (change/1));
 change = change%1;

   printf("%d\n", count);
};
