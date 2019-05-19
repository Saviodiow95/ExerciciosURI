#include <stdio.h>
void main()
{
    int n,j, i, vet[1000];

    scanf("%d",&n);
    j = 0;

    for(i = 0; i <1000; i++)
    {
        if(j >= n)
        {
            j=0;
        }
        vet[i] = j;
        j++;

    }
    for(i = 0; i< 1000; i++)
    {
        printf("N[%d] = %d\n",i,vet[i]);

    }
}
