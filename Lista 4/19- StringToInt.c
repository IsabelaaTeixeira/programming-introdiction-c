#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

/*
char num[10] = "100";
int valor = atoi(num);
*/

/**
* Converte a string str para o valor inteiro correspondente.
* @param str string contendo um número inteiro
* @return o número inteiro correspondente
*/
long int string2int( const char * str );

int main(){
    char str[128];
    long int num;

    while(scanf("%s", str) != EOF){
        num=string2int(str);

        printf("%ld %ld\n", num, num*2);   
    }
    

    return 0;
}

long int string2int( const char * str ){
    int c, c1=0;
    long int tamanho, num, peso;

    tamanho=strlen(str);

    for(c=tamanho-1; c>=0; c--){
        
        if(str[0]=='-'){
            if(c==0) {
                num=num*(-1);
                continue;
            }
            peso=pow(10,c1);
            num+=(str[c]-48)*peso;
        }
        else {
            peso=pow(10,c1);
            num+=(str[c]-48)*peso;
        }

        c1++;
    }

    return num;
}