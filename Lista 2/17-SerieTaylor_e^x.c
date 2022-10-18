#include <stdio.h>
#include <math.h>
unsigned long int fatorial(int y);

int main(){
    int N, c;
    double x, expressao, soma;

    scanf("%lf %d", &x, &N);

    for(c=0; c<=N; c++){
        expressao=(pow(x, c))/fatorial(c);
        soma+=expressao;
    }
    printf("e^%.2lf = %.6lf\n", x, soma);
    return 0;
}

unsigned long int fatorial(int y){
    int c, fat=1;
    for(c=1; c<=y; c++){
        fat = fat*c;
    }
    return fat;
}