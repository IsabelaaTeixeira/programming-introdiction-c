#include <stdio.h>
#include <stdlib.h>

#define N 1000

int main(){
    int L, l, C, c;
    int matriz[N][N];
    int maior, menor;
    double freqM=0, freqm=0, qtdm=0, qtdM=0;
    /*int *matriz;

    scanf("%d%d", &l, &c);
    matriz=malloc(sizeof(int)*l*c);
    */

    scanf("%d%d", &L, &C);

    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    maior=matriz[0][0];
    menor=matriz[0][0];
    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            if(matriz[l][c]>maior) maior=matriz[l][c];
            if(matriz[l][c]<menor) menor=matriz[l][c];
        }
    }

    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            if(maior==matriz[l][c]) qtdM++;
            if(menor==matriz[l][c]) qtdm++;
        }
    }

    freqM=(qtdM/(L*C))*100;
    freqm=(qtdm/(L*C))*100;

    printf("%d %.2lf%%\n", menor, freqm);
    printf("%d %.2lf%%\n", maior, freqM);

    return 0;
}