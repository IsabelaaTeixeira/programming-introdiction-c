#include <stdio.h>

int main() {

    int n1, n2, n3, aux;
    char x, y, z;

    scanf("%d%d%d\n", &n1, &n2, &n3);
    scanf("%c%c%c", &x, &y, &z);

    if(n1>=n2) {
        aux=n1;
        n1=n2;
        n2=aux;
    }

    if(n1>=n3) {
        aux=n1;
        n1=n3;
        n3=aux;
    }

    if(n2>=n3) {
        aux=n2;
        n2=n3;
        n3=aux;
    }

    if(x=='A' && y=='B') {
        printf("%d %d %d\n", n1, n2, n3);
    } else if(x=='A' && y=='C') {
        printf("%d %d %d\n", n1, n3, n2);
    } else if(x=='B' && y=='A') {
        printf("%d %d %d\n", n2, n1, n3);
    } else if(x=='B' && y=='C') {
        printf("%d %d %d\n", n2, n3, n1);
    } else if(x=='C' && y=='A') {
        printf("%d %d %d\n", n3, n1, n2);
    } else if(x=='C' && y=='B') {
        printf("%d %d %d\n", n3, n2, n1);
    }

    return 0;
}