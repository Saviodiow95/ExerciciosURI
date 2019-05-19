#import <stdio.h>

void main()
{
    int i;
    double n[100];

    for(i = 0; i < 100; i++)
    {
        scanf("%lf",&n[i]);
    }

    for(i = 0; i < 100; i++)
    {
        if(n[i]<=10.0)
        {
            printf("A[%d] = %.1f\n",i,n[i]);

        }
    }

}
