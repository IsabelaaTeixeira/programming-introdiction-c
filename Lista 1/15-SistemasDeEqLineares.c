#include <stdio.h>

int main(){
    double a, b, c, d, e, f, w, z, z1, y, x;
    scanf("%lf%lf%lf%lf%lf%lf", &a, &b, &c, &d, &e, &f);

    y = (a*f-d*c)/(a*e-d*b);
    x = (c-b*y)/a;

    printf("O VALOR DE X E = %.2lf\nO VALOR DE Y E = %.2lf\n", x, y);

    return 0;
}