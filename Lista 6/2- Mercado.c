#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    char *produto;
    double preco;
} prodVenda;
 
typedef struct {
    char *produto;
    int qtd;
} prodCompra;
 
/**
 * @brief Verifica se as strings são iguais.
 * 
 * @param str1 primeira string.
 * @param str2 segunda string.
 * 
 * @return 0 se são diferentes e 1 se são iguais.
*/
int verifica_stringIgual(char *str1, char *str2);
 
int main(){
    int idas, qtd_venda, qtd_compra, verif;
    int c, c1, c2;
    double total;
    prodVenda *V;
    prodCompra *C;
 
    scanf("%d", &idas);
    for(c=0; c<idas; c++){
        total=0;
        verif=0;
 
        scanf("%d", &qtd_venda);
        V=malloc(qtd_venda*sizeof(prodVenda));
        for(c1=0; c1<qtd_venda; c1++){
            V[c1].produto=malloc(qtd_venda*sizeof(prodVenda*));
            scanf("%s%lf", V[c1].produto, &V[c1].preco);
        }
 
        scanf("%d", &qtd_compra);
        C=malloc(qtd_compra*sizeof(prodCompra));
        for(c1=0; c1<qtd_compra; c1++){
            C[c1].produto=malloc(qtd_compra*sizeof(prodCompra*));
            scanf("%s%d", C[c1].produto, &C[c1].qtd);
        }
 
        for(c1=0; c1<qtd_compra; c1++){
            for(c2=0; c2<qtd_venda; c2++){
                verif=verifica_stringIgual(C[c1].produto, V[c2].produto);
                if(verif==1){
                    total+=C[c1].qtd*V[c2].preco;
                }
            }
        }
 
        printf("R$ %.2lf\n", total);
 
        free(V);
        free(C);
    }
 
    return 0;
}
 
int verifica_stringIgual(char *str1, char *str2){
    int tamanho1, tamanho2, dif=0;
    int c;
 
    tamanho1=strlen(str1);
    tamanho2=strlen(str2);
 
    if(tamanho1!=tamanho2) return 0;
 
    for(c=0; c<tamanho1; c++){
        if(str1[c]!=str2[c]) dif++;
    }
 
    if(dif==0) return 1;
    if(dif!=0) return 0;
}