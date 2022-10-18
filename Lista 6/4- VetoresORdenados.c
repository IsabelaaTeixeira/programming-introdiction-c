#include <stdio.h>
#include <math.h>
#include <stdlib.h>
 
typedef struct {
    double u, x, y, z;
    double norma;
} pontosNorma;
 
/**
 * @brief calcula a norma entre os pontos fornecidos.
 * 
 * @param A vetor que contem os valores de cada ponto.
 * @param indice é o indice atual do vetor.
 */
void calculo_Norma(pontosNorma *A, int indice);
 
/**
 * @brief ordena o vetor em ordem crescente com os valores da norma.
 * 
 * @param A vetor que contem os valores de cada ponto.
 * @param qtd_testes representa a quantidade de vezes é preciso varrer o vetor.
 */
void ordena_Norma(pontosNorma *A, int qtd_testes);
 
int main(){
    pontosNorma *A;
    int qtd_testes;
    int c;
 
    scanf("%d", &qtd_testes);
    A=malloc(qtd_testes*sizeof(pontosNorma));
 
    for(c=0; c<qtd_testes; c++) {
        scanf("%lf%lf%lf%lf", &A[c].u, &A[c].x, &A[c].y, &A[c].z);
        calculo_Norma(A, c);
    }
 
    ordena_Norma(A, qtd_testes);
 
    free(A);
    return 0;
}
 
void calculo_Norma(pontosNorma *A, int indice){
    A[indice].norma=sqrt(pow(A[indice].u, 2) + pow(A[indice].x, 2) + pow(A[indice].y, 2) + pow(A[indice].z, 2));
}
 
void ordena_Norma(pontosNorma *A, int qtd_testes){
    int c, c1;
    int indice;
    pontosNorma menor, vetor[1000];
 
    for(c=0; c<qtd_testes; c++) vetor[c]=A[c];
 
    for(c=0; c<qtd_testes; c++){
        menor=vetor[c];
        indice=c;
        for(c1=c+1; c1<qtd_testes; c1++){
            if(vetor[c1].norma<menor.norma) {
                indice=c1;
                menor=vetor[indice];
            }
        }
        vetor[indice]=vetor[c];
        vetor[c]=menor;
 
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vetor[c].u, vetor[c].x, vetor[c].y, vetor[c].z, vetor[c].norma);
    }
 
    for(c=0; c<qtd_testes; c++) A[c]=vetor[c];
}