#include <stdio.h>
#include <math.h>

int main()
{
    int i = 1, j ,k;

    do
    {
        j = 6 +i;
        for(k =0; k < 3; k++)
        {
            printf("I=%d J=%d\n",i,j);
            j--;
        }
        i +=2;


    }while(i<=9);

    return 0;
}
