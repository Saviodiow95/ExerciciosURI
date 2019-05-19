#include <stdio.h>
void main()
{
    int i;
    double vet[100];

    scanf("%lf",&vet[0]);

    for(i = 1; i <100; i++)
    {
        vet[i] = vet[i-1]/2;
    }
    for(i = 0; i< 100; i++)
    {
        printf("N[%d] = %.4lf\n",i,vet[i]);

    }
}