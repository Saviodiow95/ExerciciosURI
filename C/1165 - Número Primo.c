#include <stdio.h>

int main()
{
    int x,i, j, n;

    scanf("%d", &n);

    for(i=n;i>0; i--)
    {
       scanf("%d", &x);

       for(j=2;j<x; j++)
       {
           if(x%j==0)
           {
               printf("%d nao eh primo\n",x);
               break;
           }
       }
       if(x==j)
       {
           printf("%d eh primo\n", x);
       }

    }
    return 0;
}
