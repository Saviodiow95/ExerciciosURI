#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    double x = 3.0, y = 2.0,s = 1;

    while(x <= 39)
    {
        s += (x/y);

        x +=2;
        y *= 2;

    }
    printf("%.2lf\n",s);
}
