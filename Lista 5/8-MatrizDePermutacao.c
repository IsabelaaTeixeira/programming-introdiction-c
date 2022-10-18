#include <stdio.h>

/**
* Função que verifica se a matriz é de permutação
* @param matriz Indica a matriz a ser verificada
* @param n indica a dimensão da matriz
* @param soma parâmetro de saída, que armazenará a soma de todos os ’n’ elementos
da matriz.
@return
int
*/

int ehPermutacao( int matriz[500][500], int n, int *soma );

int main(){
    int matriz[500][500];
    int ordem, soma=0, retorno;
    int l, c;

    scanf("%d", &ordem);
    for(l=0; l<ordem; l++){
        for(c=0; c<ordem; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    retorno=ehPermutacao(matriz, ordem, &soma);

    if(retorno==0){
        printf("%d\nNAO EH PERMUTACAO\n%d\n", ordem, soma);
    } else if(retorno==1){
        printf("%d\nPERMUTACAO\n%d\n", ordem, soma);
    }

    return 0;
}

int ehPermutacao( int matriz[500][500], int n, int *soma ){
    int l, c;
    int indices[500];
    int tem1;

    for(l=0; l<n; l++){
        for(c=0; c<n; c++){ 
            *soma+=matriz[l][c];
        }
    } 

    for(l=0; l<n; l++){
        tem1=0;
        for(c=0; c<n; c++){
            if(matriz[l][c]!=0 && matriz[l][c]!=1) {
                return 0;
                break;
            } else if(matriz[l][c]==1){
                tem1++;
                if(tem1>1){
                    return 0;
                    break;
                }
                indices[l]=c;
            }
        }
        if(tem1!=1){
            return 0;
            break;
        }
    }  

    for(c=0; c<n; c++){
        for(l=c+1; l<n; l++){
            if(indices[c]==indices[l]) {
                return 0;
                break;
            }
        }
    }

    return 1;
}