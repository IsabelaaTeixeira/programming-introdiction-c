#include <stdio.h>

/**
 * @brief Função que calcula a raiz quadrada de n.
 * 
 * @param n um numero real qualquer
 * @param p precisão do cálculos
 * @return a raiz quadrada de n
 */
double raiz(double n, double p);

/**
 * @brief Valor absoluto de um numero qualquer
 * 
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */
double absoluto(double n);

int main(){
    double n, e;
    scanf("%lf %lf", &n, &e);
    raiz(n, e);

    return 0;
}

double absoluto(double n){
    if(n<0) n=-n;

    return n;
}

double raiz(double n, double p){
    double raiz, r=1, err;
    err=absoluto(n-(r*r));
    while(err>p){
        raiz=(r+(n/r))/2;
        r=raiz;
        err=absoluto(n-(r*r));
        printf("r: %.9lf, err: %.9lf\n", r, err);
    }
    
}

