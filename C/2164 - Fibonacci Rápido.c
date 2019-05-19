#include <stdio.h>
#include <math.h>


void main()
{
    double f;
    int n;

    scanf("%d",&n);

    f = (pow(((1+sqrt(5))/2),n) - pow(((1-sqrt(5))/2),n))/sqrt(5);

    printf("%.1lf\n",f);
}
