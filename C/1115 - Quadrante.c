#include <stdio.h>
#include <stdlib.h>


void main()
{
    float x, y;

    do
    {

        scanf("%f %f",&x,&y);

        if(x > 0 && y> 0)
        {
            printf("primeiro\n");
        }
        else
        {
            if(x > 0 && y< 0)
            {
                printf("quarto\n");
            }
            else
            {
                if(x < 0 && y > 0)
                {
                    printf("segundo\n");
                }
                else
                {
                    if(x < 0 && y < 0)
                    {
                        printf("terceiro\n");
                    }
                }
            }
        }
    }while(x !=0 && y!=0);
}