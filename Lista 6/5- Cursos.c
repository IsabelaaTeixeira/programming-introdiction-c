#include <stdio.h>
#include <string.h>
 
typedef struct {
    int codigo_curso;
    float valor_credito;
    char nome_curso[101];
} Cursos_Uni;
 
typedef struct {
    char nome_aluno[501];
    int codigo_curso;
    int qtd_creditos;
} Dados_Aluno;
 
int main(){
    int qtd_cursos, qtd_alunos;
    int c, c1;
    Cursos_Uni V[31]={};
    Dados_Aluno A[1001]={};
 
    scanf("%d", &qtd_cursos); //le as informacoes dos cursos e guarda no vetor V
    for(c=0; c<qtd_cursos; c++) scanf("%d%f%*c%[^\n]%*c", &V[c].codigo_curso, &V[c].valor_credito, V[c].nome_curso);
 
    scanf("%d", &qtd_alunos); //le as informacoes dos alunos e guarda no vetor A
    for(c=0; c<qtd_alunos; c++) scanf("%*c%[^\n]%*c%d%d", A[c].nome_aluno, &A[c].codigo_curso, &A[c].qtd_creditos);
    
    for(c=0; c<qtd_alunos; c++){
        for(c1=0; c1<qtd_cursos; c1++){
            if(A[c].codigo_curso==V[c1].codigo_curso){
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2f Mensalidade: %.2f\n", A[c].nome_aluno, V[c1].nome_curso, A[c].qtd_creditos, V[c1].valor_credito, (A[c].qtd_creditos*V[c1].valor_credito));
            }
        }
    }
 
    return 0;
}