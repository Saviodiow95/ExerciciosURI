#include <stdio.h>

int main()
{
    int i, n ,x ,y ;
    scanf("%d",&n);

    for(i =0; i < n; i++)
    {
        scanf("%d %d", &x, &y);


        if(y==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",(double) (x /(y * 1.0)));



        }
    }


    return 0;
}