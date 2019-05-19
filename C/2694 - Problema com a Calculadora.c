#include <stdio.h>
#include<stdbool.h>

void main()
{
    int n;
    int i, j, k, l;
    int pi, pf;
    int soma, aux;

    bool controle = false;

    char caracteres[15], temp[15];

    scanf("%d",&n);

    for(i = 0; i < n; i++)
    {
        soma =0;
        scanf("%s",&caracteres);

        for(j = 0;j < 15 ; j++)
        {
            if((caracteres[j] >= 'a' && caracteres[j] <= 'z') ||
               (caracteres[j] >= 'A' && caracteres[j] <= 'Z') || caracteres[j] == '\0' )
            {


                if(controle == true)
                {
                    l =0;
                    for(k = pi; k <= pf; k++)
                    {
                        temp[l] = caracteres[k];
                        l++;
                    }
                    aux =  atoi(temp);
                    soma += aux;

                    controle = false;

                    // zerando a variavel  temp
                    for(l = 0; l <= 14; l++)
                    {
                        temp[l] ='\0';

                    }
                }
            }
            else
            {
                if(controle == false)
                {
                    pi = j;
                }
                else
                {
                    pf = j;
                }
                controle = true;
            }
            if(caracteres[j] == '\0')
            {
                break;
            }

        }
        printf("%d\n",soma);
    }
}