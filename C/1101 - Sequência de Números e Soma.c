#include <stdio.h>

int main()
{
    int x, y, aux, soma, i;

    scanf("%d %d",&x, &y);
    while(x > 0 && y > 0)
    {

        soma = 0;
        if(x < y)
        {
            aux = x;
            x = y;
            y = aux;
        }

        for( i = y ; i <= x; i++)
        {
            printf("%d ",i);
            soma += i;
        }
        printf("Sum=%d\n",soma);

        scanf("%d %d",&x, &y);
    }
    return 0;
}