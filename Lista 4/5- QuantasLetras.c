#include <stdio.h>

void conta_letras(unsigned char frase[], int *pletras, int *pvogais, int *pconsoantes);

int main(){
    int testes, c;
    char frase[10000];
    int letras=0, vogais=0, consoantes=0;

    scanf("%d%*c", &testes);
    for(c=0; c<testes; c++){
        scanf("%[^\n]%*c", frase);
        conta_letras(frase, &letras, &vogais, &consoantes);
        printf("Letras = %d\nVogais = %d\nConsoantes = %d\n", letras, vogais, consoantes);

    }

    return 0;
}

void conta_letras(unsigned char frase[], int *pletras, int *pvogais, int *pconsoantes){
    int c=0;
    int letras=0;
    int vogais=0;
    int consoantes=0;

    while(frase[c]!='\0'){
        if(frase[c]>='A' && frase[c]<='Z' || frase[c]>='a' && frase[c]<='z'){
            letras++;
            if(frase[c]=='A' || frase[c]=='E' || frase[c]=='I' || frase[c]=='O' || frase[c]=='U' || frase[c]=='a' || frase[c]=='e' || frase[c]=='i' || frase[c]=='o' || frase[c]=='u') vogais++;
            else consoantes++;
        }

        c++;
    }
    *pconsoantes=consoantes;
    *pletras=letras;
    *pvogais=vogais;
}