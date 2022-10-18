#include <stdio.h>

int main(){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);

    if(ano>2036 || ano<1900) printf("DATA FORA DO INTERVALO ESTIPULADO\n");
    else if(mes<1 || mes>12) printf("DATA INVALIDA\n");
    else switch(mes){
            case 1: 
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;

            case 2:
            if(ano%400==0 || (ano%4==0 && ano%100!=0)) {
            if(dia>29 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;}
            else {if(dia>28 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;}
            
            case 3:
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
            
            case 4:
            if(dia>30 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
            
            case 5:
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
            
            case 6:
            if(dia>30 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
            
            case 7:
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
            
            case 8:
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
            
            case 9:
            if(dia>30 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;

            case 10:
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;

            case 11:
            if(dia>30 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;

            case 12:
            if(dia>31 || dia<1) printf("DATA INVALIDA\n");
            else printf("%d/%d/%d\n", dia, mes, ano); break;
        }
    return 0;
}