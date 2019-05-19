#include <stdio.h>
#include <math.h>
int main()
{
    int x, i;

    scanf("%d", &x);
    for(i = 1 ; i <= x; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d^2 = %ld\n",i,(long) pow(i,2));
        }
    }

    return 0;
}
