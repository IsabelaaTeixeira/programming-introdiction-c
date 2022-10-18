#include <stdio.h>

int main(){
    int senha;
    char categoria;

    scanf("%d %c", &senha, &categoria);

    if(senha<99999) printf("SENHA INVALIDA: %d - MINIMO 6 DIGITOS\n", senha);
    else if(senha>=100000) {switch(categoria) {
        case 'A':
        if(senha==321456) printf("ACESSO PERMITIDO A CATEGORIA %c\n", categoria);
        else {printf("ACESSO NEGADO\n");} break;
        case 'G':
        if(senha==9510753) printf("ACESSO PERMITIDO A CATEGORIA %c\n", categoria);
        else {printf("ACESSO NEGADO\n");} break;
        case 'U':
        if(senha==78955632) printf("ACESSO PERMITIDO A CATEGORIA %c\n", categoria);
        else {printf("ACESSO NEGADO\n");} break;
    } if(categoria!='A' && categoria!='G' && categoria!='U') printf("CATEGORIA INVALIDA: %c\n", categoria);
    }
    return 0;
}