#include <stdio.h>

void ordena_vetor(int qtd, int *vet);

int main(){
    int qtd_elementos, metade;
    double mediana;
    int v[100000];
    int c;

    scanf("%d", &qtd_elementos);

    for(c=0; c<qtd_elementos; c++)scanf("%d", &v[c]);

    ordena_vetor(qtd_elementos, v);

    if(qtd_elementos%2==0){
        metade=qtd_elementos/2;
        mediana=(v[metade-1]+v[metade])/2.0;
        printf("%.2lf\n", mediana);
    }
    else {
        metade=qtd_elementos/2;
        mediana=v[metade];
        printf("%.2lf\n", mediana);
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