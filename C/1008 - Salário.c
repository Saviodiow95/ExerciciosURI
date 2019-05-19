#include <stdio.h>

int main() {
    int numero, h;
    double vl, salary;
    scanf("%d %d %lf",&numero, &h, &vl);
    salary = (h * vl);
    printf("NUMBER = %d\n",numero);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
