#include <stdio.h>
 
int main() {
 
    int n, i, j=1, l=2, k =3;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        printf("%d %d %d PUM\n",j, l, k);
        j += 4;
        l += 4;
        k +=4;
    }
 
    return 0;
}