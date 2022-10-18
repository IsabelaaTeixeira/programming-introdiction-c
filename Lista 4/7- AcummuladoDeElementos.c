#include <stdio.h>
#define N 10000

void maiorDoVetor(int v[], int tamanho_vet, int *pMaior);

int main(){
    int v[N];
    int qtd_num_vet=1, contador, maior, i, tem=0;

    while(qtd_num_vet>0){
        scanf("%d", &qtd_num_vet);
        if(qtd_num_vet==0) break;

        for(contador=0; contador<qtd_num_vet; contador++) scanf("%d", &v[contador]);

        maiorDoVetor(v, qtd_num_vet, &maior);
        
        tem=0;
        i=0;
        while(i<=maior){
            for(contador=0; contador<qtd_num_vet; contador++){
                if(i==v[contador]){
                    tem++;
                    
                }
                
            }
            printf("(%d) %d\n", i, tem);
            i++;
        }

    }

    return 0;
}

void maiorDoVetor(int v[], int tamanho_vet, int *pMaior){
    int contador, maior;

    if(v[0]>=v[1]) maior=v[0];
    else maior=v[1];

    for(contador = 2; contador < tamanho_vet; contador++){
        if(v[contador]>=maior) maior=v[contador];
              
    }
    *pMaior=maior;
}