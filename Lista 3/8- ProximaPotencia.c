#include <stdio.h>
#include <math.h>

/**
 * @brief Valor absoluto de um numero qualquer
 * 
 * @param n um número real qualquer
 * @return o valor absoluto de n
 */
double absoluto(double n);

/**
 * @brief Função que calcula a potencia de p mais próximo a n.
 * @param n valor inteiro
 * @param p valor da potencia
 * @param pBase valor da base
 * @return retorna o valor da potencia mais proxima
 */
int next_power(int n, int p, int *pBase);

int main(){
    int n, p, mais_proximo, base;
    scanf("%d %d", &n, &p);
    mais_proximo=next_power(n, p, &base);
    printf("%d -> %d^%d = %d\n", n, base, p, mais_proximo);


    return 0;
}

double absoluto(double n){
    if(n<0) n=-n;

    return n;
}

int next_power(int n, int p, int *pBase){
    int mais_proximo, v=0, v1=0, diferenca, d, menor_dif, base_teste=1;
    
    while(1){
        mais_proximo=pow(base_teste, p);
        
        d=n-mais_proximo;
        diferenca=absoluto(d);

        if(v1==0)menor_dif=diferenca;
        v1++;

        if(diferenca<=menor_dif && v1!=0){
            menor_dif=diferenca;
            *pBase=base_teste;
        }

        if(mais_proximo>n){
            v++;
        }
        if(v>=1) break;

        
        base_teste++;
    }
    
    mais_proximo=(pow(*pBase, p));
    return mais_proximo;
    
}