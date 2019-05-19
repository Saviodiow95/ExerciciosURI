#include <stdio.h>

int main()
{
    int x, y, i, soma = 0, aux ;

    scanf("%d",&x);
    scanf("%d",&y);

    if(x < y)
    {
        aux = x;
        x = y;
        y =aux;
    }
    for(i = y ; i <= x ; i++)
    {
        if(i %13 != 0)
        {
            soma += i;
        }
    }
    printf("%d\n",soma);

    return 0;
}
