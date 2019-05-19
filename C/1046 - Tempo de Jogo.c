#include <stdio.h>

int main() {

    int h1, h2, hf;
    scanf("%d %d", &h1, &h2);

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

    printf("O JOGO DUROU %d HORA(S)\n",hf);
    return 0;
}