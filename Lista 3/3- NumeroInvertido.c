#include <stdio.h>

/**
 * @brief a funçao separa os digitos de um numero que contem 3 algarismos
 * 
 * @param G é o numero que será separado
 * @param pc valor das centenas
 * @param pd valor das dezenas
 * @param pu valor das unidades
 * @return retorna os numeros separados
 */
void separaDigitos(int G, int *pc, int *pd, int *pu);

int main(){
    int n, N, c, d, u;
    scanf("%d", &n);
    separaDigitos(n, &c, &d, &u);
    printf("%d\n", u*100+d*10+c);

    return 0;
}

void separaDigitos(int G, int *pc, int *pd, int *pu){
    *pc=(G/10/10)%10;
    *pd=(G/10)%10;
    *pu=G%10;

}