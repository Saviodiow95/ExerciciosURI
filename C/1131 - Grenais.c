#include <stdio.h>
int main()
{
    int res,ce=0,ci =0,cg =0, gi,gg,ct=0;

    do
    {
        scanf("%d %d",&gi, &gg);
        if(gi>gg)
        {
            ci ++;
        }
        else
        {
            if(gi<gg)
            {
                cg++;
            }
            else
            {
                ce++;
            }
        }

        ct++;
        do
        {
            printf("Novo grenal (1-sim 2-nao)\n");

            scanf("%d",&res);
        }
        while(res != 1 && res !=2);


    }
    while(res != 2);

    printf("%d grenais\n",ct);
    printf("Inter:%d\n",ci);
    printf("Gremio:%d\n",cg);
    printf("Empates:%d\n",ce);
    if(ci > cg)
    {
        printf("Inter venceu mais\n");
    }
    else
    {
        if(ci < cg)
        {
            printf("Gremio venceu mais\n");
        }
        else
        {
            printf("Nao houve vencedor\n");
        }
    }
    return 0;
}
