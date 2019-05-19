#include <stdio.h>
#include <stdlib.h>

int main()
{
    int d1,d2,h1,h2,m1,m2,s1,s2;
    int df,hf,mf,sf;
    char dia[100];
    scanf("%s %d1",&dia,&d1);
    scanf("%d : %d : %d", &h1, &m1, &s1);
    scanf("%s %d1",&dia,&d2);
    scanf("%d : %d : %d", &h2, &m2, &s2);

    if(s2 < s1)
    {
        sf = (s2 + 60) - s1;
        m2 -= 1;
    }
    else
    {
        sf = s2 - s1;
    }
    if(m2 < m1)
    {
        mf = (m2 + 60) - m1;
        h2 -= 1;
    }
    else
    {
        mf = m2 - m1;
    }
    if(h2 < h1)
    {
        hf = (h2 + 24) - h1;
        d2 -= 1;
    }
    else
    {
        hf = h2 - h1;
    }
    df = d2 -d1;

    printf("%d dia(s)\n",df);
    printf("%d hora(s)\n",hf);
    printf("%d minuto(s)\n",mf);
    printf("%d segundo(s)\n",sf);


    return 0;
}
