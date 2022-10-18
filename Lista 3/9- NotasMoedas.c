#include <stdio.h>

/**
 * @brief Converte um valor em reais, em notas de 100, 50, 10 e moedas de 1;
 * 
 * @param v valor total em reais;
 * @param px valor em notas de 100;
 * @param py valor em notas de 50;
 * @param pz valor em notas de 10;
 * @param pw valor em moedas de 1;
 * @return retorna a menor quantidade de notas para chegar ao valor dado inicialmente;
 */
void converteEmNotasMoedas(int v, int*px, int*py, int*pz, int *pw);

int main(){
    int v, x, y, z, w;
    scanf("%d", &v);
    converteEmNotasMoedas(v, &x, &y, &z, &w);
    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", x, y, z, w);

    return 0;
}

void converteEmNotasMoedas(int v, int*px, int*py, int*pz, int *pw){
    int new, rest, cent, unid;
    cent=v%100;
    *px=(v-cent)/100;
    unid=cent%10;

    *py=cent/50;
    if(*py>0){
        cent-=(*py)*50;
    }
    *pz=cent/10;
    *pw=unid;
    
}