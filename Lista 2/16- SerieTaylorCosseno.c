#include <stdio.h>
#include <math.h>
unsigned long int fatorial(int y);

int main() {
    int c, N;
    double x, somatorio, expressao, fat, num=1;

    scanf("%lf %d", &x, &N);

    for(c=0; c<=N; c++){
        
        expressao=(pow((-1), c)*pow(x, 2*c))/(fatorial(2*c));
        somatorio+=expressao;

    }
    printf("cos(%.2lf) = %.6lf\n", x, somatorio);

    return 0;
}

unsigned long int fatorial(int y){
    int c, fat=1;
    for(c=1; c<=y; c++){
        fat=fat*c;
    }
    return fat;
}