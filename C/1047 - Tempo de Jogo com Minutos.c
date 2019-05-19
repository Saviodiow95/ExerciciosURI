#include <stdio.h>

int main()
{
    int h1, h2,m1, m2, hf, mf;
    scanf("%d %d %d %d", &h1,&m1, &h2, &m2);

    if(h1 == h2)
    {
        hf = 24;
    }
    else
    {
        if(h1 < h2)
        {
            hf = h2 - h1;
        }
        else
        {
            hf = h2 - h1 + 24;
        }
    }
    if(m1 <= m2)
    {
        mf = m2 - m1;
    }
    else
    {
        mf = m2 - m1 + 60;
        hf --;
    }

    if(hf == 24 && m1 < m2)
    {
        hf -= 24;
    }


    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hf,mf);
    return 0;
}
