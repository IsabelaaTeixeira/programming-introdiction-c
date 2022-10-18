#include <stdio.h>

/**
 * @brief Retorna o n-ésimo termo da sequência de Fibonacci
 * 
 * @param t1 primeiro termo da sequencia
 * @param t2 segundo termo da sequencia
 * @param n a posição do termo desejado da sequencia
 * @return o valor do n-ésimo termo da sequencia
 */
int fibonacci(int t1, int t2, int n);

int main(){
    int t1, t2, n, fib;
    scanf("%d %d %d", &t1, &t2, &n);
    fib=fibonacci(t1, t2, n);
    printf("%d\n", fib);

    return 0;
}

int fibonacci(int t1, int t2, int n){
    int c, sn;
    for(c=2; c<n; c++){
        sn=t1+t2;
        t1=t2;
        t2=sn;
    }
    return sn;
}