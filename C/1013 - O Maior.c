#include <stdio.h>

int main() {

    int a, b, c ,res;
    scanf("%d %d %d", &a, &b, &c);
    res = (a+b+abs(a-b)) / 2;
    res = (res+c+abs(res-c)) / 2;
    printf("%d eh o maior\n", res);
    return 0;
}
