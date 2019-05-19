#import <stdio.h>

void main()
{


    int i, x, fib[46];

    scanf("%d",&x);

    fib[0] = 0;

    fib[1] = 1;


    for(i = 2; i < x; i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    
    printf("%d",fib[0]);

    for(i = 1; i < x; i++)
    {
        printf(" %d",fib[i]);
    }
    printf("\n");

}
