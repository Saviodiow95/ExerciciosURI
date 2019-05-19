#include <stdio.h>
#include <stdlib.h>


void main()
{
   int cd, qt;

   scanf("%d %d", &cd, &qt);

   switch(cd)
   {
       case(1):
                printf("Total: R$ %.2lf\n",(qt*4.00));
       break;

       case(2):
                printf("Total: R$ %.2lf\n",(qt*4.50));
       break;

       case(3):
                printf("Total: R$ %.2lf\n",(qt*5.00));
       break;

       case(4):
                printf("Total: R$ %.2lf\n",(qt*2.00));
       break;

       case(5):
                printf("Total: R$ %.2lf\n",(qt*1.50));
       break;


   }
}