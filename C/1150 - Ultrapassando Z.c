#include <stdio.h>

int main()
{
    int i,j,s=0,x,z;
    scanf("%d", &x);
    do{
        scanf("%d", &z);
    }
    while(x>=z);
    for(i=x,j=0; j<z; i++)
    {
        j+=i;
        s++;
    }
    printf("%d\n", s);

    return 0;
}
