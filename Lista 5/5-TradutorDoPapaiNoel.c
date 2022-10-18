#include <stdio.h>
#include <string.h>

#define L 24
#define C 30

int main(){
    char paises[L][C]={"brasil", "alemanha", "austria", "coreia", "espanha", "grecia", "estados-unidos", "inglaterra", "australia", "portugal", "suecia", "turquia", "argentina", "chile", "mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia", "siria", "marrocos", "japao"};
    char cumprimentos[L][C]={"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!", "Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!", "Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!", "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"};
    char nome_pais[C];
    int l, c;
    int diferente, tem=0, tamanho;

    memset(nome_pais, 0, C*sizeof(char));

    while (scanf("%[^\n]%*c", nome_pais)!=EOF){
        diferente=0;
        tem=0;

        for(l=0; l<L; l++){
            diferente=0;
            for(c=0; c<C; c++){
                tamanho=strlen(nome_pais);

                if(paises[l][c]=='\0') {
                    if(tamanho!=c) diferente++;
                    break;
                }

                if(nome_pais[c]!=paises[l][c]) {
                    diferente++;
                }

                if(diferente!=0) break;
            }

            
            if(diferente==0){
                /*
                for(c=0; c<C; c++){
                    printf("%c", cumprimentos[l][c]);
                }
                */
                printf("%s", cumprimentos[l]);

                printf("\n");

                tem++;
                
                break;
            }
        }

        if(tem==0) printf("-- NOT FOUND --\n");

        memset(nome_pais, 0, C*sizeof(char));
    }
    

    return 0;
}