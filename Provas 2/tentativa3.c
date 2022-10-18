#include <stdio.h>

void achaIntercala(int N, int *pr);

int main(){
    int N, r;
    while(1){
        scanf("%d", &N);
        if(N==0) return 0;
        if(N>0 && N<3) continue;
        if(N>2) {
            achaIntercala(N, &r);
            if(r==0) printf("Nao intercalada\n"); 
            else printf("Intercalada\n");
        }
    }

    return 0;
}

void achaIntercala(int N, int *pr){
    int c=0, num=0, num_anterior=0, cresce=0, decresce=0;
    *pr=1;
    for(c=0; c<N; c++){
        scanf("%d", &num);
        if(c==0) num_anterior=num;
        else{
            if(num_anterior<num){
                cresce++;
            } if(num_anterior>num) decresce++;
            if(num_anterior==num) *pr=0;
        }
        if(cresce>=2 || decresce>=2){*pr=0;}
        if(cresce==decresce){
            cresce=0;
            decresce=0;
        }
        num_anterior=num;
    }
   
}