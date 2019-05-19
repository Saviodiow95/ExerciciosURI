#include <stdio.h>
 
int main() {
    char nome[100];
    double sal, ven, total;
    scanf("%s %lf %lf",&nome, &sal, &ven);
    total = sal + ven * 0.15;
    printf("TOTAL = R$ %.2lf\n",total);
 
 
    return 0;
}