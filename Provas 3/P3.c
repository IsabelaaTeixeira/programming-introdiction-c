#include <stdio.h>

int main(){
    int matriz[1000][1000];
    int L, C;
    int linha_menor, coluna_menor, menor;
    int linha_maior, coluna_maior, maior;
    int l, c;

    scanf("%d %d", &L, &C);

    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    menor=matriz[0][0];
    linha_menor=0;
    coluna_menor=0;

    maior=matriz[0][0];
    linha_maior=0;
    linha_menor=0;

    for(c=0; c<C; c++){
        for(l=0; l<L; l++){
            if(matriz[l][c]<menor){
                menor=matriz[l][c];
                linha_menor=l;
                coluna_menor=c;
            }

            if(matriz[l][c]>maior){
                maior=matriz[l][c];
                linha_maior=l;
                coluna_maior=c;
            }
        }
    }

    matriz[linha_maior][coluna_maior]=menor;
    matriz[linha_menor][coluna_menor]=maior;

    for(l=0; l<L; l++){
        for(c=0; c<C; c++){
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}
