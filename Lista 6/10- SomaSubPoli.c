#include <stdio.h>
#include <stdlib.h>

//TA ERRADO FAZ DE NOVO 

typedef struct {
    double coeficiente;
    int expoente;
} CoefExp;

void lePoli(CoefExp *V, int qtd_elementosPoli);
void Soma(CoefExp *V, CoefExp *V1, CoefExp *R, int tamanho, int tamanho1, int *tamanhoR);
void Sub(CoefExp *V, CoefExp *V1, CoefExp *R, int tamanho, int tamanho1, int *tamanhoR);
void organizaPrint(CoefExp *R, int tamanhoR);

int main(){
    int qtd_testes, qtd_elementosPoli, qtd_elementosPoli1, tamanhoR;
    int c;
    char somSub;
    CoefExp *V, *V1, *R;

    scanf("%d", &qtd_testes);
    for(c=0; c<qtd_testes; c++){
        scanf("%*c%c", &somSub);

        scanf("%d", &qtd_elementosPoli);
        V=calloc(qtd_elementosPoli, sizeof(CoefExp));
        lePoli(V, qtd_elementosPoli);

        scanf("%d", &qtd_elementosPoli1);
        V1=calloc(qtd_elementosPoli1, sizeof(CoefExp));
        lePoli(V1, qtd_elementosPoli1);

        R=calloc(10000,sizeof(CoefExp));
        if(somSub=='+') Soma(V, V1, R, qtd_elementosPoli, qtd_elementosPoli1, &tamanhoR);
        if(somSub=='-') Sub(V, V1, R, qtd_elementosPoli, qtd_elementosPoli1, &tamanhoR);
        R=realloc(R, tamanhoR*sizeof(CoefExp));

        organizaPrint(R, tamanhoR);

        free(R);
        free(V1);
        free(V);
    }
    return 0;
}

void lePoli(CoefExp *V, int qtd_elementosPoli){
    int c;
    for(c=0; c<qtd_elementosPoli; c++) scanf("%lf%d", &V[c].coeficiente, &V[c].expoente);
}

void Soma(CoefExp *V, CoefExp *V1, CoefExp *R, int tamanho, int tamanho1, int *tamanhoR){
    int c, c1, c2=0;
    int igual=0;
    CoefExp menor;
    
    for(c=0; c<tamanho; c++) R[c]=V[c];

    for(c1=0; c1<tamanho1; c1++){
        igual=0;
        for(c=0; c<tamanho; c++){
            if(V1[c1].expoente==R[c].expoente) {
                igual++;
                R[c].coeficiente+=V1[c1].coeficiente;
            }
        }
        if(igual==0){
            R[c2+tamanho]=V1[c1];
            c2++;
        }
    }

    *tamanhoR=c2+tamanho;

}

void Sub(CoefExp *V, CoefExp *V1, CoefExp *R, int tamanho, int tamanho1, int *tamanhoR){
    int c, c1, c2=0;
    int igual;
    CoefExp menor;
    
    for(c=0; c<tamanho; c++) R[c]=V[c];
    
    for(c1=0; c1<tamanho1; c1++){
        igual=0;
        for(c=0; c<tamanho; c++){
            if(V1[c1].expoente==R[c].expoente) {
                igual++;
                R[c].coeficiente-=V1[c1].coeficiente;
            }
        }
        if(igual==0){
            R[c2+tamanho]=V1[c1];
            c2++;
        }
    }

    *tamanhoR=c2+tamanho;
}

void organizaPrint(CoefExp *R, int tamanhoR){
    int c, c1;    
    int indice;
    CoefExp maior;
    
    for(c=0; c<tamanhoR; c++){
        maior=R[c];
        indice=c;
        for(c1=c+1; c1<tamanhoR; c1++){
            if(R[c1].expoente>maior.expoente){
                indice=c1;
                maior=R[c1];
            }
        }
        R[indice]=R[c];
        R[c]=maior;
    }

    for(c=0; c<tamanhoR; c++){
        if(R[c].expoente==0){
            if(R[c].coeficiente>0)printf("+%.2lf", R[c].coeficiente);
            else if(R[c].coeficiente<0) printf("%.2lf", R[c].coeficiente);
        } else {
            if(R[c].coeficiente>0)printf("+%.2lfX^%d", R[c].coeficiente, R[c].expoente);
            else if(R[c].coeficiente<0) printf("%.2lfX^%d", R[c].coeficiente, R[c].expoente);
        }
    }
    printf("\n");
}