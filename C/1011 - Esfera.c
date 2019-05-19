#include <stdio.h>
#include <math.h>

int main() {

    double v, R, pi;
    pi = 3.14159;

    scanf("%lf",&R);

    v = (4.0/3) * pi * pow(R,3);

    printf("VOLUME = %.3lf\n",v);

    return 0;
}
