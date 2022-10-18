#include <stdio.h>

void ordenaMatriz(int matriz[][1000], int ordem);

int main(){
    int matriz[1000][1000];
    int ordem, linha_menor, menor;
    int l, c, c1;

    scanf("%d", &ordem);

    for(l=0; l<ordem; l++){
        for(c=0; c<ordem; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    ordenaMatriz(matriz, ordem);

    for(l=0; l<ordem; l++){
        for(c=0; c<ordem; c++){
            printf("%d ", matriz[l][c]);
        }
        printf("\n");
    }

    return 0;
}

void ordenaMatriz(int matriz[][1000], int ordem){
    int l, c, c1;
    int linha_menor=0, menor;

    for(c=0; c<ordem; c++){
        
        for(c1=0; c1<ordem; c1++){
            menor=matriz[c1][c];
            linha_menor=c1;
            for(l=c1; l<ordem; l++){
                if(matriz[l][c]<menor){
                    menor=matriz[l][c];
                    linha_menor=l;
                }
            }
            matriz[linha_menor][c]=matriz[c1][c];
            matriz[c1][c]=menor;
        }
    }

}