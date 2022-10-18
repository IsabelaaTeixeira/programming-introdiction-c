#include <stdio.h>
 
int main() {
    int n, n0, n1, n2, n3, n4;
 
    scanf("%d", &n);
 
    if(n>99999) {
        printf("NUMERO INVALIDO\n");
        return 0;
    }
 
    n4 = n%10;
    n3 = (n/10)%10;
    n2 = (n/10/10)%10;
    n1 = (n/10/10/10)%10;
    n0 = (n/10/10/10/10)%10;
 
    if(n>9999){
    if(n1==n3 && n4==n0) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }return 0;}
 
    if(n>999 && n<10000) {
    if(n2==n3 && n1==n4) {
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }return 0;}
 
    if (n>99 && n<1000) {
    if(n4==n2){
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }return 0;}
 
    if (n>9 && n<100) {
    if(n3==n4){
        printf("PALINDROMO\n");
    } else {
        printf("NAO PALINDROMO\n");
    }return 0;}
 
    if(n<10 && n>=0) {
        printf("PALINDROMO\n");
    }
 
    return 0;
}