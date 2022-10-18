#include <stdio.h>
#include <stdlib.h>

void funcionapeloamordedeus(double *valor);

int main(){
    int qtd_pontos;
    double vet1[3], vet2[3], vetF[3];
    double maior, sub;
    int c, c1;

    scanf("%d", &qtd_pontos);

    for(c=0; c<3; c++) scanf("%lf", &vet1[c]);
    
    for(c=0; c<qtd_pontos-1; c++){
        maior=0;

        for(c1=0; c1<3; c1++) scanf("%lf", &vet2[c1]);

        for(c1=0; c1<3; c1++) vetF[c1]=(vet1[c1]-vet2[c1]);
        funcionapeloamordedeus(vetF);
        
        for(c1=0; c1<3; c1++) if(vetF[c1]>=maior) maior=vetF[c1];
        
        printf("%.2lf\n", maior);

        for(c1=0; c1<3; c1++) vet1[c1]=vet2[c1];
    }

    return 0;
}

void funcionapeloamordedeus(double *valor){
    int c;
    for(c=0; c<3; c++) {
        if(valor[c] <= 0) valor[c]=-valor[c];
        else valor[c];
    }

}