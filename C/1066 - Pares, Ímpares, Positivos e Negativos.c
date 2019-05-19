#include <stdio.h>

int main()
{
    int x, i, cp=0, cn=0, cim=0, cpa=0;

    for(i = 0; i< 5; i++)
    {
        scanf("%d",&x);

        if(x == 0)
        {
            cpa++;
        }
        else
        {
            if(x > 0)
            {
                if(x%2==0)
                {
                    cp++;
                    cpa++;
                }
                else
                {
                    cp++;
                    cim++;
                }
            }
            else
            {
                if(x%2==0)
                {
                    cn++;
                    cpa++;
                }
                else
                {
                    cn++;
                    cim++;
                }
            }
        }
    }


    printf("%d valor(es) par(es)\n",cpa);
    printf("%d valor(es) impar(es)\n",cim);
    printf("%d valor(es) positivo(s)\n",cp);
    printf("%d valor(es) negativo(s)\n",cn);


    return 0;
}
