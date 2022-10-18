#include <stdio.h>

char *str_prefixo(int n, char *s, char *p);

int main(){
    char str[500], prefixo[500];
    int numero, k;
    scanf("%d", &numero);

    while(numero--){
        scanf("%d%*c", &k);//o %*c é para que o programa ignore o caractere do espaço quando for inserido "1 (espaço) UNIVERSIDADE FEDERAL DE GOIAS"
        scanf("%[^\n]", str);
        str_prefixo(k, str, prefixo);
        printf("%s\n", prefixo);
    }
    return 0;
}

char *str_prefixo(int n, char *s, char *p){
    int i;
    for(i=0; i<n; i++){
        p[i]=s[i];
    }
    p[i]='\0';

    return p;
}