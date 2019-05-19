#include <stdio.h>

void main()
{
    char str[50],cifra[50],aux;
    int i, n, x,j,k;

    char alfa[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

    scanf("%d",&n);

    for(i =0; i< n; i++)
    {
        scanf("%s",&str);
        scanf("%d",&x);

        for(j = 0; j < 50 ; j++)
        {
            if(str[j] == '\0')
            {
                break;
            }
            else
            {
                for(k = 0; k < 26; k++)
                {
                    if(str[j] == alfa[k])
                    {
                        if(k - x >= 0)
                        {
                            aux = alfa[k-x];
                            printf("%c",aux);
                            break;
                        }
                        else
                        {
                            aux = alfa[k-x+26];
                            printf("%c",aux);
                            break;
                        }
                    }
                }
            }
        }
        printf("\n");
    }
}