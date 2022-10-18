#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
typedef struct {
    int codigo_curso;
    float valor_credito;
    char *nome_curso;
} Cursos_Uni;
 
typedef struct {
    char *nome_aluno;
    int codigo_curso;
    int qtd_creditos;
} Dados_Aluno;
 
int main(){
    int qtd_cursos, qtd_alunos;
    int c, c1;
    Cursos_Uni *V;
    Dados_Aluno *A;
 
    scanf("%d", &qtd_cursos); //le as informacoes dos cursos e guarda no vetor V
    V=malloc(qtd_cursos*sizeof(Cursos_Uni));
    for(c=0; c<qtd_cursos; c++) {
        V[c].nome_curso=malloc(1000*sizeof(Cursos_Uni*));
        scanf("%d%f%*c%[^\n]%*c", &V[c].codigo_curso, &V[c].valor_credito, V[c].nome_curso);
        V[c].nome_curso=realloc(V[c].nome_curso, ((strlen(V[c].nome_curso))+1)*sizeof(Cursos_Uni*));
    }
 
    scanf("%d", &qtd_alunos); //le as informacoes dos alunos e guarda no vetor A
    A=malloc(qtd_alunos*sizeof(Dados_Aluno));
    for(c=0; c<qtd_alunos; c++) {
        A[c].nome_aluno=malloc(1000*sizeof(Dados_Aluno));
        scanf("%*c%[^\n]%*c%d%d", A[c].nome_aluno, &A[c].codigo_curso, &A[c].qtd_creditos);
        A[c].nome_aluno=realloc(A[c].nome_aluno, ((strlen(A[c].nome_aluno))+1)*sizeof(Dados_Aluno*));
    }
    
    for(c=0; c<qtd_alunos; c++){
        for(c1=0; c1<qtd_cursos; c1++){
            if(A[c].codigo_curso==V[c1].codigo_curso){
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", A[c].nome_aluno, V[c1].nome_curso, A[c].qtd_creditos, V[c1].valor_credito, (A[c].qtd_creditos*V[c1].valor_credito));
            }
        }
    }
 
    free(V);
    free(A);
    
 
    return 0;
}