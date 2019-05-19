#include <stdio.h>

void main()
{
    int n, a ,b;

    scanf("%d",&n);
    scanf("%d %d",&a, &b);

    if(n >= (a+b))
    {
        printf("Farei hoje!\n");
    }
    else
    {
        printf("Deixa para amanha!\n");
    }

}
