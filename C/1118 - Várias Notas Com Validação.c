#include <stdio.h>

int main()
{
    int res;
    double x, y;
    do
    {
        do
        {
            scanf("%lf",&x);

            if((x< 0 || x > 10))
            {
                printf("nota invalida\n");
            }

        }
        while(x< 0 || x > 10);


        do
        {
            scanf("%lf",&y);

            if((y< 0 || y > 10))
            {
                printf("nota invalida\n");
            }

        }
        while(y< 0 || y > 10);


        printf("media = %.2lf\n",(x + y)/2);

        do
        {
            printf("novo calculo (1-sim 2-nao)\n");

            scanf("%d",&res);
        }
        while(res != 1 && res !=2);
    }
    while(res != 2);


    return 0;
}