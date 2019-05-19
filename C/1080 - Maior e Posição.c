#include <stdio.h>

int main()
{
    int x, i,pos, maior =0;

    for(i = 1 ; i <= 100;i++)
    {
        scanf("%d", &x);
        if(x > maior)
        {
            maior = x;
            pos = i;
        }
    }
    printf("%d\n%d\n",maior,pos);
    return 0;
}
