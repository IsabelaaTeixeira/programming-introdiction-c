#include <stdio.h>
#include <string.h>

int main(){
    char str[5000];
    int prim_let[101];
    int c, c1;
    int tamanho, primeira_letra=0, palavras=0, aliteracoes=0, igual=0;

    memset(str, 0, sizeof(char)*5000);
    memset(prim_let, 0, sizeof(int)*101);

    while(scanf("%[^\n]%*c", str) != EOF){
        tamanho=strlen(str);

        primeira_letra=0;
        palavras=0;
        aliteracoes=0;
        igual=0;

        for(c=0; c<tamanho; c++){
            if(((str[c]>='a' && str[c]<='z') || (str[c]>='A' && str[c]<='Z')) && primeira_letra==0){
                primeira_letra++;
                prim_let[palavras]=c;
                palavras++;
            } else if(str[c]==' ' && primeira_letra!=0){
                prim_let[palavras]=c+1;
                palavras++;
            }

        }

        for(c=0; c<palavras; c++){
            
            if((str[prim_let[c]]==str[prim_let[c+1]] || str[prim_let[c]]==str[prim_let[c+1]]+32 || str[prim_let[c]]==str[prim_let[c+1]]-32) && igual==0){
                aliteracoes++;
                igual++;
            } else if((str[prim_let[c]]==str[prim_let[c+1]] || str[prim_let[c]]==str[prim_let[c+1]]+32 || str[prim_let[c]]==str[prim_let[c+1]]-32)){
                igual++;
            } else{
                igual=0;
            }
        }

        printf("%d\n", aliteracoes);

        memset(str, 0, sizeof(char)*5000);
        memset(prim_let, 0, sizeof(int)*101);
    }

    return 0;
}