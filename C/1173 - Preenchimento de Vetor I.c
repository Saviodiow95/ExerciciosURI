#include <stdio.h>
#include <stdlib.h>


void main()
{
   int x[10], i, n;

   scanf("%d", &n);
   x[0] = n;
   for(i = 1; i < 10; i++)
   {
        x[i] = x[i-1] *2;
   }


    for(i = 0; i < 10; i++)
   {
       printf("N[%d] = %d\n",i, x[i]);
   }


}
