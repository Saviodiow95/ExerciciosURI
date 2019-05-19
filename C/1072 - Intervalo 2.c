#include <stdio.h>
#include <string.h>

int main()
{
    int i, n, x, ci=0,co=0;

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);
        if(x >= 10 && x <=20)
        {
            ci++;
        }
        else
        {
            co++;
        }
    }
    printf("%d in\n%d out\n",ci,co);


    return 0;
}
