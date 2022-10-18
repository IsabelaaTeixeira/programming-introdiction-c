#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct {
    char pais[20];
    char cumprimento[24];
} natal;
 
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
    natal N[24]={"brasil", "Feliz Natal!", "alemanha", "Frohliche Weihnachten!", "austria", "Frohe Weihnacht!", "coreia", "Chuk Sung Tan!", "espanha", "Feliz Navidad!", "grecia", "Kala Christougena!", "estados-unidos", "Merry Christmas!", "inglaterra", "Merry Christmas!", "australia", "Merry Christmas!", "portugal", "Feliz Natal!", "suecia", "God Jul!", "turquia", "Mutlu Noeller", "argentina", "Feliz Navidad!", "chile", "Feliz Navidad!", "mexico", "Feliz Navidad!", "antardida", "Merry Christmas!", "canada", "Merry Christmas!", "irlanda", "Nollaig Shona Dhuit!", "belgica", "Zalig Kerstfeest!", "italia", "Buon Natale!", "libia", "Buon Natale!", "siria", "Milad Mubarak!", "marrocos", "Milad Mubarak!", "japao", "Merii Kurisumasu!"};
    char pais_digitado[24]={};
    int c, verificador, tem;
    
    while (scanf("%[^\n]%*c", pais_digitado)!=EOF){
        verificador=0;
        tem=0;
 
        for(c=0; c<24; c++){
            verificador=verifica_stringIgual(N[c].pais, pais_digitado);
            if(verificador==1) {
                printf("%s\n", N[c].cumprimento);
                tem++;
            }
        }
        if(tem==0) printf("-- NOT FOUND --\n");
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