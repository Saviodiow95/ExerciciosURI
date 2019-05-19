#import <stdio.h>

void main()
{
    int i,n[20],aux,j = 19;

    for(i = 0; i < 20; i++)
    {
        scanf("%d",&n[i]);
    }

    for(i = 0; i < 10; i++)
    {
        aux = n[i];
        n[i] = n[j];
        n[j] = aux;
        j--;
    }

    for(i = 0; i < 20; i++)
    {
        printf("N[%d] = %d\n",i,n[i]);

    }

}
