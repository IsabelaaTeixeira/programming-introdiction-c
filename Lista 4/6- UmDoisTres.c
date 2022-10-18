#include <stdio.h>
#define N 1000

int main(){
    int c, qtd_testes, i=0, certo=0, errado=0;
    char palavra[N];
    char one[4]={'o', 'n', 'e'};
    char two[4]={'t', 'w', 'o'};
    char three[6]={'t', 'h', 'r', 'e', 'e'};


    scanf("%d%*c", &qtd_testes);
    for(c=0; c<qtd_testes; c++){
        scanf("%[^\n]%*c", palavra);


        while(palavra[i]!='\0'){
            if(palavra[i]==one[i]){
                certo++;
            } else errado++;

            i++;
        }
    if(errado<2) printf("1\n");
    i=0;
    certo=0;
    errado=0;

        while(palavra[i]!='\0'){
            if(palavra[i]==two[i]){
                    certo++;
                } else errado++;

                i++;
            }
        if(errado<2) printf("2\n");
        i=0;
        certo=0;
        errado=0;
    

        while(palavra[i]!='\0'){
            if(palavra[i]==three[i]){
                    certo++;
                } else errado++;

                i++;
            }
        if(errado<2) printf("3\n");
        i=0;
        certo=0;
        errado=0;
    }

    return 0;
}