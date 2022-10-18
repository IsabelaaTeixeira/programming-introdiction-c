#include <stdio.h>

int main(){
    int V[1000], W[1000];
    int contador, c2;
    int qtd_num_vet, maior=0, menor;

    scanf("%d", &qtd_num_vet);

    for(contador=0; contador<qtd_num_vet; contador++) scanf("%d", &V[contador]);
    

    c2=qtd_num_vet-1;
    for(contador=0; contador<qtd_num_vet; contador++) {
        W[c2]=V[contador];
        c2--;
    }

    for(contador=0; contador<qtd_num_vet; contador++) if(V[contador]>maior) maior=V[contador];

    for(contador=0; contador<qtd_num_vet; contador++) {
        if(contador==0) menor=V[contador];
        if(V[contador]<menor) menor=V[contador];

    }
    for(contador=0; contador<qtd_num_vet; contador++){
        printf("%d", V[contador]);
        if(contador!=qtd_num_vet-1)printf(" ");
        else printf("\n");
    }

    for(contador=0; contador<qtd_num_vet; contador++){
        printf("%d", W[contador]);
        if(contador!=qtd_num_vet-1)printf(" ");
        else printf("\n");
    }

    printf("%d\n%d\n", maior, menor);

}