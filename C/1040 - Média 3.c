#include <stdio.h>

int main()
{

    double n1,n2,n3,n4,ne,md,mdf;
    scanf("%lf%lf%lf%lf",&n1,&n2,&n3,&n4);
    md = (n1 * 2 + n2 *3 + n3 * 4 + n4) / 10;

    printf("Media: %.1lf\n",md);

    if(md >= 7.0)
    {
        printf("Aluno aprovado.\n");

    }
    else
    {
        if(md >= 5.0)
        {
            printf("Aluno em exame.\n");
            scanf("%lf",&ne);
            printf("Nota do exame: %.1lf\n",ne);
            mdf = (md + ne) / 2;

            if(mdf >= 5.0)
            {
                printf("Aluno aprovado.\n");

            }
            else
            {
                printf("Aluno reprovado.\n");
            }
            printf("Media final: %.1lf\n",mdf);
        }
        else
        {
            printf("Aluno reprovado.\n");
        }
    }

    return 0;
}