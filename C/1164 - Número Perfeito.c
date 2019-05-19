#include <stdio.h>

void main()
{
    int i, j,soma , x, n;

    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        soma = 0;

        scanf("%d",&x);

        for(j = 1; j <= x/2; j++)
        {
            if(x%j==0)
            {
                soma += j;
            }
        }

        if(x == soma)
        {
            printf("%d eh perfeito\n",x);
        }
        else
        {
            printf("%d nao eh perfeito\n",x);
        }
    }


}