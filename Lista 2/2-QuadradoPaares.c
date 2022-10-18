#include <stdio.h>
 
int main(){
    int N;
    int c, q, n;
 
    scanf("%d", &N);
    for(c=2; c<=N; c=c+2){
        if(N%2==0){
            q=c*c;
            printf("%d^2 = %d\n", c, q);
        } else {
            N--;
            q=c*c;
            printf("%d^2 = %d\n", c, q);
        }
    }
 
    return 0;
}