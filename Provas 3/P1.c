#include <stdio.h>
#include <string.h>

int main(){
    char frase[5000];
    int indice_PL[101];
    int contador, CPL=0;
    int tamanho=0, primeira_letra, aliteracao, igual;

    memset(frase, 0, sizeof(char)*5000);
    memset(indice_PL, 0, sizeof(int)*101);

    while (scanf("%[^\n]%*c", frase) != EOF){

        aliteracao=0;
        igual=0;
        primeira_letra=0;
        CPL=0;
        tamanho=strlen(frase);

        for(contador=0; contador<tamanho; contador++){
            if(frase[contador]!=' ' && primeira_letra==0){
                primeira_letra++;
                CPL=contador;
            } else
            if(frase[contador]==' ' && primeira_letra==0){
                primeira_letra++;
                CPL=contador;
            } else 
            if(frase[contador]==' '){
                if((frase[CPL]==frase[contador+1] || frase[CPL]==frase[contador+1]+32 || frase[CPL]==frase[contador+1]-32) && igual==0) {
                    aliteracao++;
                    CPL=contador+1;
                    igual++;
                } else
                if((frase[CPL]==frase[contador+1] || frase[CPL]==frase[contador+1]+32 || frase[CPL]==frase[contador+1]-32) && igual!=0) {
                    igual++;
                } else 
                if(frase[CPL]!=frase[contador+1] && frase[CPL]!=frase[contador+1]+32 && frase[CPL]!=frase[contador+1]-32) {
                    igual=0;
                    CPL=contador+1;
                }
            }
        }


        printf("%d\n", aliteracao);    

        memset(frase, 0, sizeof(char)*5000);
        memset(indice_PL, 0, sizeof(int)*101);
    }

    return 0;
}