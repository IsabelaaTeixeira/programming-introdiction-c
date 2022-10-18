#include <stdio.h>

int main(){
    unsigned int times, finais=0, i=1, j=0;
    int contador=0, aux=1, contF=0;

    scanf("%u", &times);
    if(times<2)printf("Campeonato invalido!\n");

    while(contador<times){
        contador++;
        finais+=(times-contador);
    }
    while(i<times){
        if(contF<finais)contF++;
        j=aux+1;
        aux++;
        printf("Final %u: Time%u X Time%u\n",contF, i, j);
        if(j==times){
            i++;
            j=0;
            aux=i;
        }
    }


    return 0;
}