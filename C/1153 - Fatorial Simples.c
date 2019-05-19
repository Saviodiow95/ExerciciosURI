#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main()
{
    int n, i = 1, fat= 0;

    scanf("%d",&n);
    fat = n;

    while(n-i != 0)
    {
        fat *= n-i;
        i++;
    }
    printf("%d\n",fat);
}
