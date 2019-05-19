#include <stdio.h>
#include <math.h>

int main()
{
    int i , j;

    for(i = 0; i <= 20; i +=2)
    {
        for(j = 1; j <=3; j++)
        {
            if(i % 10 == 0)
            {
                printf("I=%.0f J=%.0f\n",(float)(i/10),(float)(j+(i/10)));
            }
            else
            {
                printf("I=%.1f J=%.1f\n",(float)(i/10.0),(float)(j+(i/10.0)));
            }
        }

    }

    return 0;
}
