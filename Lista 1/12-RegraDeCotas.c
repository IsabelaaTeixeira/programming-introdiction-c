#include <stdio.h>

int main(){

    double RBF;
    int QP, TE, ET;

    scanf("%lf%d%d%d", &RBF, &QP, &TE, &ET);

    if(TE==1) {
        printf("ALUNO NAO COTISTA\n");
    } else if (RBF/QP<=(3*937)/2) {
        if(ET==1 || ET==2 || ET==3) {
            printf("ALUNO COTISTA (L2)\n");
        } else {
            printf("ALUNO COTISTA (L1)\n");
        }
    } else if (RBF/QP>(3*937)/2) {
        if(ET==1 || ET==2 || ET==3) {
            printf("ALUNO COTISTA (L4)\n");
        } else {
            printf("ALUNO COTISTA (L3)\n");
        }
    }

    return 0;
}