#include <stdio.h>
#include <math.h>

int main()
{
    int i , cont =0;

    double x, md, soma = 0.0;

    for(i = 0; i < 6; i++)
    {
        scanf("%lf",&x);
        if(x > 0)
        {
            soma += x;
            cont++;
        }
    }
    md = soma / cont;

    printf("%d valores positivos\n",cont);
    printf("%.1lf\n",md);

    return 0;
}
