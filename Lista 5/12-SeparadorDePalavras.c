#include <stdio.h>
#include <string.h>
 
#define MAX_WORDS 200
#define MAX_WORD_LEN 64+1
 
/**
* @brief Função de separação de palavras de acordo com a uma lista de separadores.
Exemplo de chamada da função:
*
* str_split("Ola mundo! 1,23", m, ", .!?");
*
* O resultado é a separação das strings "Ola", "mundo", "1", "23", cada uma
* ocupando uma linha da matriz m, com base nos caracteres de pontuação fornecidos.
*
* @param str ponteiro para o início da string original
* @param m matriz de caracteres, sendo cada linha uma palavra da string original
* @param sep string com a lista de caracteres separadores
* @return int quantidade de palavras detectadas
*/
int str_split(char * str, char m[][MAX_WORD_LEN], char * sep);
 
int main(){
 
    char texto[MAX_WORDS*(MAX_WORD_LEN)+1]; 
    char sep[128];
    char Strings[MAX_WORDS][MAX_WORD_LEN];
    int size, i, cmax, len, count;
 
    scanf("%[^\n]%*c", texto);
    scanf("%[^\n]%*c", sep);
 
    size=str_split(texto, Strings, sep);
 
    for(i=0; i<size; i++){
        len=strlen(Strings[i]);
 
        if(i==0) cmax=len;
        else if(len>cmax)cmax=len;
 
        printf("(%d)%s\n", len, Strings[i]);
    }
    count=0;
 
    for(i=0; i<size; i++){
        len=strlen(Strings[i]);
        if(len == cmax) count++;
    }
    printf("%d\n", count);
 
    return 0;
}
 
 
char *mystrchar( char *str, int c){
    while(*str!='\0'){
        if(*str==c) return str;
        str++;
    }
    return NULL;
}
 
 
int str_split(char * str, char m[][MAX_WORD_LEN], char * sep){
    int i=0;
    int ss=0;
    int n=0;
    int c=0;
 
    while(str[i]!='\0'){
 
        //if(str[i] estiver listado em sep)
        if(mystrchar(sep, str[i])==NULL){
            m[n][c] = str[i];
            c++;
        } 
        
        else {
            if(c>0) {
                m[n][c]='\0';
                n++;
                c=0;
            }
        }
        i++;
    }
 
    if(c>0){
        m[n][c]='\0';
        n++;
    }
 
    return n;
}