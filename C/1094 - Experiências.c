#include <stdio.h>

int main()
{

    int i, e, n, total=0, tc=0, tr=0, ts=0;
    char t;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d %c",&e,&t);

        total += e;
        if(t == 'c' || t == 'C')
        {
            tc += e;
        }
        else
        {
            if(t == 'r' || t == 'R')
            {
                tr += e;
            }
            else
            {
                if(t == 's' || t == 'S')
                {
                    ts += e;
                }
            }
        }
    }
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",tc);
    printf("Total de ratos: %d\n",tr);
    printf("Total de sapos: %d\n",ts);
    printf("Percentual de coelhos: %.2lf %%\n",((tc*100.0)/total));
    printf("Percentual de ratos: %.2lf %%\n",((tr*100.0)/total));
    printf("Percentual de sapos: %.2lf %%\n",((ts*100.0)/total));



    return 0;
}