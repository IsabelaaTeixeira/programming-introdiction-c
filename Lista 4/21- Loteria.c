#include <stdio.h>

int main(){
    int seis_dezenas[6], tentativas[6];
    int qtd_apostas, acertos=0, sena=0, quina=0, quadra=0;
    int c, c1, c2;

    for(c=0; c<6; c++) scanf("%d", &seis_dezenas[c]);

    scanf("%d", &qtd_apostas);

    for(c=0; c<qtd_apostas; c++){

        acertos=0;

        for(c1=0; c1<6; c1++) scanf("%d", &tentativas[c1]);

        for(c1=0; c1<6; c1++){
            for(c2=0; c2<6; c2++){
                if(seis_dezenas[c1]==tentativas[c2]){
                    acertos++;
                }
            }
        }

        if(acertos==6) sena++;
        else if(acertos==5) quina++;
        else if(acertos==4) quadra++;
    
    }

    if(sena>0) printf("Houve %d acertador(es) da sena\n", sena);
    else printf("Nao houve acertador para sena\n");

    if(quina>0) printf("Houve %d acertador(es) da quina\n", quina);
    else printf("Nao houve acertador para quina\n");

    if(quadra>0) printf("Houve %d acertador(es) da quadra\n", quadra);
    else printf("Nao houve acertador para quadra\n");

    return 0;
}