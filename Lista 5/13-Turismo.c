#include <stdio.h>

int main(){
    int matriz[6][6]={0,63,210,190,-1,190,63,0,160,150,95,10,210,160,0,10,1,10,190,150,10,0,10,20,10,95,7,21,0,80,190,2,-1,41,80,0};
    int rota[101]={0};
    int tamanho_da_rota, soma=0;
    int c;

    scanf("%d", &tamanho_da_rota);
    for(c=0; c<tamanho_da_rota; c++) scanf("%d", &rota[c]);

    for(c=0; c<tamanho_da_rota-1; c++){
        if(matriz[rota[c]][rota[c+1]]==-1) {
            printf("rota invalida!\n");
            return 0;
        }
        else soma+=matriz[rota[c]][rota[c+1]];
    }

    printf("%d\n", soma);

    return 0;
}