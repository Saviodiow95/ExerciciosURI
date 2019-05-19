#include <stdio.h>

int main()
{
    int i, j = 0, x, y, ct;

    scanf("%d %d",&x, &y);

    while(j < y-1)
    {
        ct =0;
        for(i = 0; i < x; i++)
        {
            j++;
            if(ct ==0)
            {
                printf("%d",j);
                ct++;
            }
            else
            {
                printf(" %d",j);
            }
        }
        printf("\n");

    }
    return 0;
}