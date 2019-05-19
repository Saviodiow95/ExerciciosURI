#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int d;
    double c;
    scanf("%d",&d);
    scanf("%lf",&c);

    printf("%.3lf km/l\n",(d/c));

}
