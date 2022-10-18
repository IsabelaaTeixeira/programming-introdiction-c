#include <stdio.h>
#include <string.h>

int main(){
    int qtd_testes;
    int contador, tamanho, i, i2=0, truncamento;
    char str[1000], str_inv[1000];

    scanf("%d%*c", &qtd_testes);
    for(contador=0; contador<qtd_testes; contador++){
        scanf("%[^\n]%*c", str);

        tamanho=strlen(str);

        for(i=0; i<tamanho; i++) if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')) str[i]+= 3;
        
        i2=0;
        memset(str_inv, 0, 1000*sizeof(char));
        for(i=tamanho-1; i>=0; i--){
            if(i2<tamanho){
                str_inv[i2]=str[i];

                i2++;
            }
        }
        
        truncamento=(tamanho)/2;

        for(i=truncamento; i<tamanho; i++){
            str_inv[i]-=1;
        }
        
        printf("%s\n", str_inv);
    }

    return 0;
}