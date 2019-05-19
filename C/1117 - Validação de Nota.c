#include <stdio.h>

int main()
{
    double x, y;

    do
    {
        scanf("%lf",&x);

        if((x< 0 || x > 10))
        {
            printf("nota invalida\n");
        }

    }while(x< 0 || x > 10);


    do
    {
        scanf("%lf",&y);

        if((y< 0 || y > 10))
        {
            printf("nota invalida\n");
        }

    }while(y< 0 || y > 10);


    printf("media = %.2lf\n",(x + y)/2);


    return 0;
}