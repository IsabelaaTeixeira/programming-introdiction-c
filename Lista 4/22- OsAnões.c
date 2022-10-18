#include <stdio.h>

void ordena_vetor(int qtd, int *vet);

int main(){
    int nove_anoes[9], sete_anoes[7];
    int casos_teste, soma=0, diferenca=0;
    int c, c0, c1, c2, c3=0;

    scanf("%d", &casos_teste);

    for(c=0; c<casos_teste; c++){

        soma=0;
        diferenca=0;

        for(c1=0; c1<9; c1++){
            scanf("%d", &nove_anoes[c1]);
            soma+=nove_anoes[c1];
        }

        diferenca=soma-100;
        c3=0;

        for(c1=0; c1<9; c1++){
            for(c2=c1+1; c2<9; c2++){
                if(diferenca==(nove_anoes[c1]+nove_anoes[c2])) {
                    for(c0=0; c0<9; c0++){
                        if(c0==c1 || c0==c2) continue;
                        else {
                            sete_anoes[c3]=nove_anoes[c0];
                            c3++;
                        }
                    }
                }
            }
        }

        ordena_vetor(7, sete_anoes);

        for(c1=0; c1<7; c1++){
            printf("%d\n", sete_anoes[c1]);
        }
    }

    

    return 0;
}

void ordena_vetor(int qtd, int *vet){
    int c, c2, i=1, new_h, indice=0;
    int maior=vet[0];
    int vetor[100000];

    for(c=0; c<qtd; c++) vetor[c]=vet[c];

    for(c=0; c<qtd; c++){
        maior=vetor[0];
        for(c2=0; c2<qtd-c; c2++){
            if(maior<=vetor[c2]){
                maior=vetor[c2];
                indice=c2;
            }
        }
        new_h=qtd-i;

        vetor[indice]=vetor[new_h];
        vetor[new_h]=maior;
        i++;

    }

    for(c=0; c<qtd; c++) vet[c]=vetor[c];

}