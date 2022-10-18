#include <stdio.h>
#include <string.h>

void inverter_funcao(int tamanho, char *s, char *str);

int main(){
    int qtd_testes, n1, n2, tamanho;
    int c;
    char s[100000], str[100000];

    scanf("%d", &qtd_testes);

    while(qtd_testes--){

        memset(s, 0, 100000*sizeof(char));
        memset(str, 0, 100000*sizeof(char));

        scanf("%d %d", &n1, &n2);
        for(c=n1; c<=n2; c++){
            sprintf(str, "%d", c);
            strcat(s, str);
        }

        tamanho=strlen(s);

        inverter_funcao(tamanho, s, str);

        strcat(s, str);

        printf("%s\n", s);

    }

    return 0;
}

void inverter_funcao(int tamanho, char *s, char *str){
    int c, i=0;

    for(c=tamanho-1; c>=0; c--){
        str[c]=s[i];
        i++;
    }

}

