#include <stdio.h>

void atrasado_ou_nao(int *tempo_de_chegada, int presencas_minimas, int tamanho);

int main(){
    int total_alunos, presencas_minimas, presencas=0;
    int tempo_de_chegada[100000], chamada[100000];
    int c, c1=0;

    scanf("%d %d", &total_alunos, &presencas_minimas);

    for(c=0; c<total_alunos; c++) scanf("%d", &tempo_de_chegada[c]);

    for(c=total_alunos-1; c>=0; c--){
        if(tempo_de_chegada[c]<=0) {
            presencas++;
            chamada[c1]=c+1;
            c1++;
        } 
    }

    if(presencas>=presencas_minimas){
        printf("NAO\n");
        for(c=0; c<c1; c++) printf("%d\n", chamada[c]);
    } else printf("SIM\n");

    return 0;
}

void atrasado_ou_nao(int *tempo_de_chegada, int presencas_minimas, int tamanho){
    int c, c1=0;
    int presencas;
    int chamada[100000];

    for(c=tamanho-1; c>=0; c--){
        if(tempo_de_chegada[c]<=0) {
            presencas++;
            chamada[c1]=c+1;
            c1++;
        } 
    }

    if(presencas>=presencas_minimas){
        printf("NAO\n");
        for(c=0; c<c1; c++) printf("%d\n", chamada[c]);
    } else printf("SIM\n");

}
