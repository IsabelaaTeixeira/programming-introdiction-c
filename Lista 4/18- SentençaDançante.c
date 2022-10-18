#include <stdio.h>
#include <string.h>

int main(){

    char sentence[51];
    int tamanho, primeira_letra=0, indice_da_ultima_letra;
    int contador;

    memset(sentence, 0, 51*sizeof(char));

    while(scanf("%[^\n]%*c", sentence) != EOF){
        tamanho=strlen(sentence);
        primeira_letra=0;


        for(contador=0; contador<tamanho; contador++){
            if(((sentence[contador]>='A' && sentence[contador]<='Z') || (sentence[contador]>='a' && sentence[contador]<='z')) && primeira_letra==0) {
                primeira_letra++;
                indice_da_ultima_letra=contador;
                if(sentence[contador]>='a' && sentence[contador]<='z') {
                    sentence[contador]-=32;
                }
            } else if((sentence[contador]>='A' && sentence[contador]<='Z') || (sentence[contador]>='a' && sentence[contador]<='z') && primeira_letra!=0){
                if(sentence[contador]>='A' && sentence[contador]<='Z'){
                    if(sentence[indice_da_ultima_letra]>='A' && sentence[indice_da_ultima_letra]<='Z') sentence[contador]+=32;
                }

                if(sentence[contador]>='a' && sentence[contador]<='z'){
                    if(sentence[indice_da_ultima_letra]>='a' && sentence[indice_da_ultima_letra]<='z') sentence[contador]-=32;
                }

                indice_da_ultima_letra=contador;
            }

        }

        printf("%s\n", sentence);

    }

    return 0;

}