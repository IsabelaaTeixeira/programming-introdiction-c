#include <stdio.h>

int sorteada(int N);

int main(){
    int N, contador=1, vencedor;

    while(1){
        scanf("%d", &N);
        if(N!=0){
            vencedor=0;
            vencedor=sorteada(N);
            printf("Teste %d\n", contador);
            if(vencedor==0) printf("Sem vencedor\n\n");
            else {printf("%d\n\n", vencedor);}
            

        } else {break;}
        contador++;
        vencedor=0;
    }

    return 0;
}

int sorteada(int N){
    int contador=1, sorteada=0, num;
    while(contador<=N){
        scanf("%d", &num);
        if(num==contador){
            sorteada=num;
        }
        contador++;
    }
    return sorteada;
}