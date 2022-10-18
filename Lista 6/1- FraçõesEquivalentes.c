#include <stdio.h>
#include <string.h>
 
typedef struct {
    int numerador;
    int denominador;
    double resultado;
} frc;
 
int main(){
    int casos_teste, qtd_fracoes, tem=0;
    int c, c1, c2;
    frc fracoes[100000];
 
    scanf("%d", &casos_teste);
    
    for(c=0; c<casos_teste; c++){
        scanf("%d", &qtd_fracoes);
        tem=0;
        memset(fracoes, 0, 100000*sizeof(frc));
 
        for(c1=0; c1<qtd_fracoes; c1++){
            scanf("%d/%d", &fracoes[c1].numerador, &fracoes[c1].denominador);
            fracoes[c1].resultado=fracoes[c1].numerador*1.0/fracoes[c1].denominador*1.0;
        }
 
        printf("Caso de teste %d\n", c+1);
 
        for(c1=0; c1<qtd_fracoes; c1++){
            for(c2=c1+1; c2<qtd_fracoes; c2++){
                if(fracoes[c1].resultado==fracoes[c2].resultado){
                    printf("%d/%d equivalente a %d/%d\n", fracoes[c1].numerador, fracoes[c1].denominador, fracoes[c2].numerador, fracoes[c2].denominador);
                    tem++;
                }
            }
        }
        if(tem==0){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
        
    }
 
    return 0;
}