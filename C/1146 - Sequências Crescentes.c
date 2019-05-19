#include <stdio.h>

int main()
{
    int x, i;

    scanf("%d", &x);


    while(x != 0)
    {
        printf("1");
        for(i = 2; i <= x; i++)
        {
            printf(" %d",i);
        }
        printf("\n");


        scanf("%d", &x);
    }

    return 0;
}
