#include <stdio.h>
void main()
{
    int j,i,ci=0,cp=0,vp[5],vi[5],n;

    for(i = 0; i < 15; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            vp[cp] = n;
            cp++;
            if(cp > 4)
            {
                for(j = 0; j < 5; j++)
                {
                    printf("par[%d] = %d\n",j,vp[j]);
                }
                cp=0;
            }
        }
        else
        {
            vi[ci] = n;
            ci++;
            if(ci > 4)
            {
                for(j = 0; j < 5; j++)
                {
                    printf("impar[%d] = %d\n",j,vi[j]);
                }
                ci=0;
            }
        }
    }
    for(i = 0; i < ci; i++)
    {
        printf("impar[%d] = %d\n",i,vi[i]);
    }
    for(i = 0; i < cp; i++)
    {
        printf("par[%d] = %d\n",i,vp[i]);
    }
}