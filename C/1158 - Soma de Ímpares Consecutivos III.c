#include <stdio.h>

int main()
{
    int n,i, x, y, cont, soma, k,j;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {


        scanf("%d %d",&x, &y);
        if(x%2==0)
        {
            k = x + 1;
            soma = k;
            cont =1;
        }
        else
        {
            k = x;
            soma = k;
            cont =1;
        }
        while(cont != y)
        {
            k += 2;
            soma += k;
            cont++;
        }

        printf("%d\n",soma);

    }



    return 0;
}
