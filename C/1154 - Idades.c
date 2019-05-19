#include <stdio.h>

int main()
{
    int x = 0, id,ci =0;

    scanf("%d", &id);


    while(id >= 0)
    {
        ci++;
        x += id;

        scanf("%d", &id);
    }
    printf("%.2lf\n",(double) x/ci);

    return 0;
}
