#include <stdio.h>

int main() {

    int i,vt[5], cont = 0;

    for(i = 0 ; i < 5; i++)
    {
        scanf("%d",&vt[i]);
    }
    for(i = 0; i < 5; i++)
    {
        if(vt[i]%2==0)
        {
            cont++;
        }
    }
    printf("%d valores pares\n",cont);

    return 0;
}
