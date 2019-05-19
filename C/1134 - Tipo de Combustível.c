#include <stdio.h>

int main()
{
    int ca = 0,cg = 0,cd= 0, op;

    do
    {
        scanf("%d",&op);
        if(op == 1)
        {
            ca++;
        }
        else
        {
            if(op == 2)
            {
                cg++;
            }
            else
            {
                if(op == 3)
                {
                    cd++;
                }

            }
        }

    }
    while(op != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",ca);
    printf("Gasolina: %d\n",cg);
    printf("Diesel: %d\n",cd);


    return 0;
}