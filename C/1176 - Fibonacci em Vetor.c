#import <stdio.h>

void main()
{
    int i, n, x;
    long long int fib[61];

    scanf("%d",&n);

    fib[0] = 0;

    fib[1] = 1;


    for(i = 2; i <= 60; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    for(i = 0; i < n; i++)
    {
        scanf("%d",&x);
        printf("Fib(%d) = %lld\n",x,fib[x]);

    }

}