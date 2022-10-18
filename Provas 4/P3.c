#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int numJogo;
    int numero[6];
} CARTELA;

void verifAcertos(CARTELA *V, CARTELA sorteados, int qtdTestes);

int main(){
    int c;
    int qtdTestes;
    CARTELA *V, sorteados;

    scanf("%d", &qtdTestes);
    V=calloc(qtdTestes, sizeof(CARTELA));
    for(c=0; c<qtdTestes; c++) scanf("%d %d %d %d %d %d %d", &V[c].numJogo, &V[c].numero[0], &V[c].numero[1], &V[c].numero[2], &V[c].numero[3], &V[c].numero[4], &V[c].numero[5]);

    scanf("%d %d %d %d %d %d %d", &sorteados.numJogo, &sorteados.numero[0], &sorteados.numero[1], &sorteados.numero[2], &sorteados.numero[3], &sorteados.numero[4], &sorteados.numero[5]);

    verifAcertos(V, sorteados, qtdTestes);

    free(V);
    return 0;
}

void verifAcertos(CARTELA *V, CARTELA sorteados, int qtdTestes){
    int c, c0, c1;
    int count=0, v[6]={0}, j=0;

    for(c=0; c<qtdTestes; c++){
        memset(v, 0, 6*sizeof(int));
        count=0;
        for(c0=0; c0<6; c0++){
            for(c1=0; c1<6; c1++){
                if(V[c].numero[c0]==sorteados.numero[c1]) {
                    v[count]=V[c].numero[c0];
                    count++;
                }
            }
        }
        if(count==4){
            printf("QUADRA %d: %d %d %d %d\n", V[c].numJogo, v[0], v[1], v[2], v[3]);
            j++;
        }
        if(count==5){
            printf("QUINA %d: %d %d %d %d %d\n", V[c].numJogo, v[0], v[1], v[2], v[3], v[4]);
            j++;
        }
        if(count==6){
            printf("SENA %d: %d %d %d %d %d %d\n", V[c].numJogo, v[0], v[1], v[2], v[3], v[4], v[5]);
            j++;
        }
    }
    if(j==0) printf("NENHUMA CARTELA PREMIADA PARA O CONCURSO %d\n", sorteados.numJogo);
}