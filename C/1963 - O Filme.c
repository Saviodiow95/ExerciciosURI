#include <stdio.h>
#include <math.h>


void main()
{
   double a , b, d;

   scanf("%lf %lf", &a, &b);
   d = b-a;

   printf("%.2lf%%\n",(d*100)/a);

}
