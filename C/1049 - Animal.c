#include <stdio.h>
#include <string.h>

int main()
{

    char en1[100], en2[100], en3[100];

    scanf("%s",&en1);
    scanf("%s",&en2);
    scanf("%s",&en3);


    if(strcmp(en1,"vertebrado")==0)
    {
        if(strcmp(en2,"ave") ==0)
        {
            if(strcmp(en3,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else
        {
            if(strcmp(en3,"onivoro")==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }
    }
    else
    {
        if(strcmp(en2,"inseto")==0)
        {
            if(strcmp(en3,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }
        else
        {
            if(strcmp(en3,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }
    }

    return 0;
}