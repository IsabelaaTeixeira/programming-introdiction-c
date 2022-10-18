#include <stdio.h>

#define L 51
#define C 51

void equivalente(double matriz[][C], int tamanho);

int main(){
    int qtd_testes, qtd_fracoes;
    int c, c1, linhas, colunas;
    double matriz[L][C];
    double numF, num1,  num2;

    scanf("%d", &qtd_testes);
    
    for(c=0; c<qtd_testes; c++){
        scanf("%d", &qtd_fracoes);

        linhas=0;
        colunas=0;

        for(c1=0; c1<qtd_fracoes; c1++){
            scanf("%lf/%lf", &num1, &num2);
            numF=num1/num2;

            matriz[linhas][colunas]=num1;
            matriz[linhas+1][colunas]=num2;        
            matriz[linhas+2][colunas]=numF;

            colunas++;
        }

        printf("Caso de teste %d\n", c+1);

        equivalente(matriz, qtd_fracoes);

    }

    return 0;
}

void equivalente(double matriz[][C], int tamanho){
    int c, c1, i=0;
    int existe_equivalentes=0;

    for(c=i; c<tamanho; c++){
        for(c1=i+1; c1<tamanho; c1++){
        if(matriz[2][c]==matriz[2][c1]){
            printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n", matriz[0][c], matriz[1][c], matriz[0][c1], matriz[1][c1]);
            existe_equivalentes++;
        } 
        }
        i++;
    }

    if(existe_equivalentes==0)printf("Nao ha fracoes equivalentes na sequencia\n");

}