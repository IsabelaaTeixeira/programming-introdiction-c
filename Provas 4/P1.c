#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int matricula;
    int idade;
    int numFilhos;
    char sexo;
    double salario;
} FUNCIONARIO;

int supMediaIDD_e_3SalarioMin(FUNCIONARIO *V, int numFunc);
int F_mediaFilho(FUNCIONARIO *V, int numFunc);
int M_mediaFilho(FUNCIONARIO *V, int numFunc);
int QuarentaESete_salario(FUNCIONARIO *V, int numFunc);

int main(){
    int num_funcionarios, saida1, saida2, saida3, saida4;
    int c;
    FUNCIONARIO *V;

    scanf("%d", &num_funcionarios);
    V=calloc(num_funcionarios, sizeof(FUNCIONARIO));

    for(c=0; c<num_funcionarios; c++) scanf("%d %d %d %c %lf", &V[c].matricula, &V[c].idade, &V[c].numFilhos, &V[c].sexo, &V[c].salario);

    saida1=supMediaIDD_e_3SalarioMin(V, num_funcionarios);
    saida2=F_mediaFilho(V, num_funcionarios);
    saida3=M_mediaFilho(V, num_funcionarios);
    saida4=QuarentaESete_salario(V, num_funcionarios);

    printf("%d %d %d %d\n", saida1, saida2, saida3, saida4);

    free(V);

    return 0;
}

int supMediaIDD_e_3SalarioMin(FUNCIONARIO *V, int numFunc){
    int c;
    int soma=0, count=0;
    double media=0, tresSalarioMin=(1200.00*3);

    for(c=0; c<numFunc; c++) soma+=V[c].idade;
    media=(double)soma/numFunc;

    for(c=0; c<numFunc; c++){
        if(V[c].idade>media && V[c].salario>tresSalarioMin){
            count++;
        }
    }

    return count;
}

int F_mediaFilho(FUNCIONARIO *V, int numFunc){
    int c;
    int soma=0, count=0;
    double media=0;

    for(c=0; c<numFunc; c++)soma+=V[c].numFilhos;
    media=soma/numFunc;

    for(c=0; c<numFunc; c++){
        if(V[c].sexo=='F'){
            if(V[c].numFilhos>media) count++;
        }
    }
    return count;
}

int M_mediaFilho(FUNCIONARIO *V, int numFunc){
    int c;
    int soma=0, count=0;
    double media=0;

    for(c=0; c<numFunc; c++)soma+=V[c].numFilhos;
    media=soma/numFunc;

    for(c=0; c<numFunc; c++){
        if(V[c].sexo=='M'){
            if(V[c].numFilhos>media) count++;
        }
    }
    return count;
}

int QuarentaESete_salario(FUNCIONARIO *V, int numFunc){
    int c, num_pessoas=0, count=0;;
    float doisSalarios=(1200.00*2), salarioPerCapita=0;

    for(c=0; c<numFunc; c++){
        if(V[c].idade>47){
            num_pessoas=V[c].numFilhos+1;
            salarioPerCapita=V[c].salario/num_pessoas;
            if(salarioPerCapita<doisSalarios) count++;
        }
    }
    return count;
}