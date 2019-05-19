#import <stdio.h>

void main()
{
    long long int i;
    int n , cont;

    while(scanf("%d", &n) == 1)
    {
        i = 1;
        cont = 1;

        while(i % n != 0)
        {
            cont++;

            i = ((10 * i + 1) % n);
        }

        printf("%d\n", cont);
    }
}
