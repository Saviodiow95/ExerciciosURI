#include <stdio.h>

int main()
{
    int i, x;

    double n1,n2,n3,md;

    scanf("%d", &x);
    for(i = 0; i < x; i++)
    {
        scanf("%lf %lf %lf", &n1, &n2, &n3);

        md = ((n1*2)+(n2*3)+(n3*5))/10;

        printf("%.1lf\n",md);
    }
    return 0;
}
