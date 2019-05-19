#include <stdio.h>
int main()
{
    int n, cont, i;
    int pa, pb;
    double g1, g2;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        cont = 0;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while(pa <= pb)
        {
            pa *= (g1 / 100.0) + 1;
            pb *= (g2 / 100.0) + 1;
            cont++;
            if (cont > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (cont <= 100)
            printf("%d anos.\n", cont);
    }
    return 0;
}
