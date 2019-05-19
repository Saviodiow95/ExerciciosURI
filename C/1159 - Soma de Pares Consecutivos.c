#include <stdio.h>

int main()
{
    int n, cont, soma, k,j;

    scanf("%d",&n);

    while(n != 0)
    {

        if(n%2 != 0)
        {
            k = n + 1;
            soma = k;
            cont =1;
        }
        else
        {
            k = n;
            soma = k;
            cont =1;
        }
        while(cont != 5)
        {
            k += 2;
            soma += k;
            cont++;
        }

        printf("%d\n",soma);

        scanf("%d",&n);


    }
    return 0;
}