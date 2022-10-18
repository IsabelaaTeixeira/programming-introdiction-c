#include <stdio.h>
#define N 100000

int main(){
    int qtd_notas, vezes, maior=0, indice=0;
    int v[N];
    int contador;

    scanf("%d", &qtd_notas);

    for(contador = 0; contador < qtd_notas; contador ++) scanf("%d", &v[contador]);

    for(contador = 0; contador < qtd_notas; contador ++){
        if(v[contador]==v[(qtd_notas-1)]){
            vezes++;
            
        }
    }    
    printf("Nota %d, %d vezes\n", v[(qtd_notas-1)], vezes);


    for(contador = 0; contador < qtd_notas; contador ++){
        if(v[contador]>maior) {
            maior=v[contador];
            indice=contador;
        }
    }
    printf("Nota %d, indice %d\n", maior, indice);

    return 0;
}