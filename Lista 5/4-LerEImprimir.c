#include <stdio.h>

#define L 10
#define C 10

int main(){
    int matriz[L][C];
    int l, c;
    int linhas, colunas;

    while (1){
        scanf("%d", &linhas);

        if((linhas>0 && linhas <11)) break;
    }

    while (1){
        scanf("%d", &colunas);

        if((colunas>0 && colunas<11)) break;
    }
    
    for(l=0; l<linhas; l++){
        for(c=0; c<colunas; c++){
            scanf("%d", &matriz[l][c]);
        }
    }

    for(l=0; l<linhas; l++){
        printf("linha %d: ", l+1);
        for(c=0; c<colunas; c++){
            printf("%d", matriz[l][c]);
            if(c!=colunas-1) printf(",");
        }
        printf("\n");
    }

    return 0;
}