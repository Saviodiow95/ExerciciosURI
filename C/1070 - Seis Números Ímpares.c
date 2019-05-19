#include <stdio.h>

int main()
{
    int  x, cont, k;
        scanf("%d",&x);
        if(x%2==0)
        {
            k = x + 1;
            cont =1;
            printf("%d\n",k);
        }
        else
        {
            k = x;
            cont =1;
            printf("%d\n",k);
        }
        while(cont != 6)
        {
            k += 2;

            printf("%d\n",k);
            cont++;
        }
    return 0;
}