#include <stdio.h>

/**
 * @brief Função que calcula o valor de pi usando a série proposta por John Wallis
 * @param n quantidade de termos da série
 * @return o valor aproximado da constante pi
 */
double compute_pi(int n);

int main(){
    int qtd;
    double pi;
    scanf("%d", &qtd);
    pi=compute_pi(qtd);
    printf("%.12lf", pi);

    return 0;
}

double compute_pi(int n){
    int num, denom, c1=0, c2=1;
    double pi;

    pi=2/1.0;
    n--;

    for (n; n > 0; n--) {
        if (c1 == 0) {
            num = 2;
            denom = 3;
            c1++; 

        } else {
            if (c2 == 1) c1 = 0;
                num = 4 + (2 * (c1 / 2));
                denom = 3 + (2 * (c2 / 2));
                c1++;
                c2++;         
        }
        pi*=num/(denom*1.0);
    }
    pi*=2;

    return pi;
}