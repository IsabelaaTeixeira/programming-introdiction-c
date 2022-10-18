#include <stdio.h>
 
typedef struct {
    int matricula, dia, mes, ano;
    char nome[201];
} DadosAluno;
 
int ComparaDataNasc(DadosAluno *N1, DadosAluno*N2);
 
int main(){
    int num_alunos, verificador=-1;
    int c, c1;
    DadosAluno A[31], aux;
 
    scanf("%d", &num_alunos);
    for(c=0; c<num_alunos; c++) scanf("%d%d%d%d%[^\n]%*c", &A[c].matricula, &A[c].dia, &A[c].mes, &A[c].ano, A[c].nome);
 
    for(c=0; c<num_alunos; c++){
        verificador=-1;
 
        for(c1=c+1; c1<num_alunos; c1++){
            verificador=ComparaDataNasc(&A[c], &A[c1]);
            if(verificador==0){
                aux=A[c];
                A[c]=A[c1];
                A[c1]=aux;
            }
        }
    }
 
    for(c=0; c<num_alunos; c++) printf("Matric.: %d Nome:%s Data Nasc: %d/%d/%d\n", A[c].matricula, A[c].nome, A[c].dia, A[c].mes, A[c].ano);
 
}
 
int ComparaDataNasc(DadosAluno *N1, DadosAluno*N2){
    if(N1->ano>N2->ano){
        return 1;
    } else if(N1->ano==N2->ano){
        if(N1->mes>N2->mes){
            return 1;
        } else if(N1->mes==N2->mes){
            if(N1->dia>N2->dia){
                return 1;
            }
        }
    } else return 0;    
    return 0;
}