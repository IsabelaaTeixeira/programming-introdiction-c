#include <stdio.h>

/**
 * @brief Funcao que calcula o fatorial de um numero n
 * 
 * @param n um numero inteiro positivo
 * @return o fatorial de n
 */
unsigned long int fat (unsigned int n);

int main(){
    int n, fat1;
    scanf("%d", &n);
    fat1=fat(n);
    printf("%d! = %d\n", n, fat1);

    return 0;
}

unsigned long int fat (unsigned int n){
    int fatorial=1, c;
    for(c=n; c>0; c--){
        fatorial*=c;
    }
    return fatorial;

}