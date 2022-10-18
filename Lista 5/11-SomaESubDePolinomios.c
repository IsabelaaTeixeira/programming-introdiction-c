#include <stdio.h>
#include <string.h>

#define L 6
#define C 51
/**
 * @brief 
 * 
 * @param matriz 
 * @param linha 
 * @param tamanho 
 */
void ordena_linha_matriz(double matriz[][51], int linha, int tamanho);

int main(){
    int qtd_testes, qtd_termos_poli_1, qtd_termos_poli_2, igual, ind_do_igual;    
    int c, c1, c3, contador;
    double matriz[L][C];
    char soma_sub;

    scanf("%d%*c", &qtd_testes);

    for(contador=0; contador<qtd_testes; contador++){
        memset(matriz, 0, sizeof(double)*306);

        scanf("%c", &soma_sub);
        
        scanf("%d", &qtd_termos_poli_1);
        for(c=0; c<qtd_termos_poli_1; c++){ //le o primeiro polinomio
            scanf("%lf", &matriz[0][c]);
            scanf("%lf", &matriz[1][c]);
        }

        scanf("%d", &qtd_termos_poli_2);
        for(c=0; c<qtd_termos_poli_2; c++){ //le o segundo polinomio
            scanf("%lf", &matriz[2][c]);
            scanf("%lf%*c", &matriz[3][c]);
        }

        for(c=0; c<qtd_termos_poli_1; c++) matriz[5][c]=matriz[1][c]; //recebe os primeiros expoentes para a formação do novo expoente
        
        c3=0;
        for(c=0; c<qtd_termos_poli_2; c++) {
            igual=0;
            for(c1=0; c1<qtd_termos_poli_1; c1++){
                if(matriz[1][c1]==matriz[3][c]) { //caso algum expoente do primeiro seja igual a algum do segundo é peciso ignora-lo
                    igual++;
                }
            }
            if(igual==0) { //se não houver expoente igual ele é colocado com os outros expoentes
                matriz[5][c3+qtd_termos_poli_1]=matriz[3][c];
                c3++;
            }
        }

        ordena_linha_matriz(matriz, 5, c3+qtd_termos_poli_1); //ordenar os expoentes em ordem decrescente

        for(c=0; c<c3+qtd_termos_poli_1; c++){ //os primeiros valores são recebidos de acordo com a nova organização de expoentes
            for(c1=0; c1<qtd_termos_poli_1; c1++){
                if(matriz[5][c]==matriz[1][c1]){
                    matriz[4][c]=matriz[0][c1];
                }
            }
        }

        if(soma_sub=='+'){ //se for uma soma...
            for(c=0; c<c3+qtd_termos_poli_1; c++){// os segundos valores são recebidos, mas com o cuidado se se somar os valores nos quaiss o expoente se repete
                for(c1=0; c1<qtd_termos_poli_2; c1++){
                    if(matriz[5][c]==matriz[3][c1]){
                        matriz[4][c]+=matriz[2][c1]; 
                    }
                }
            }
        } else if(soma_sub=='-'){ //se for uma subtração....
            for(c=0; c<c3+qtd_termos_poli_1; c++){ // os segundos valores são recebidos, mas com o cuidado se se subtrair os valores nos quaiss o expoente se repete
                for(c1=0; c1<qtd_termos_poli_2; c1++){
                    if(matriz[5][c]==matriz[3][c1]){
                        matriz[4][c]-=matriz[2][c1];
                    }
                }        
            }
        }

        for(c=0; c<c3+qtd_termos_poli_1; c++){
            if(matriz[5][c]==0){
                if(matriz[4][c]>0) printf("+%.2lf", matriz[4][c]);
                else if(matriz[4][c]<0) printf("%.2lf", matriz[4][c]);
            }
            else if(matriz[4][c]>0) printf("+%.2lfX^%.0lf", matriz[4][c], matriz[5][c]);
            else if(matriz[4][c]<0) printf("%.2lfX^%.0lf", matriz[4][c], matriz[5][c]);
        }

        printf("\n");
    }

    return 0;
}

void ordena_linha_matriz(double matriz[][51], int linha, int tamanho){
    int c, c1;
    int maior, i_maior;

    for(c=0; c<tamanho; c++){
        maior=matriz[linha][c];
        i_maior=c;
        for(c1=c+1; c1<tamanho; c1++){
            if(maior<matriz[linha][c1]) {
                i_maior=c1;
                maior=matriz[linha][c1];
            }
        }
        matriz[linha][i_maior]=matriz[linha][c];
        matriz[linha][c]=maior;
    }

}