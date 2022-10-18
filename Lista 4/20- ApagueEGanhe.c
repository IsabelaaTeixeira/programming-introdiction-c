#include<stdio.h>

int main (){
    
    int n, posicao=-1,  indice, d;
    char maior='0';
        
    while(1){
        scanf("%d",&n);
        
        scanf("%d",&d);

        if(n == 0 && d == 0)break;
        else{

            char v[n];
            
            scanf("%s",v);
            
            posicao=-1;
            while(1){

                if ( d == 0)break;

                maior='0';
                for(indice=posicao+1; indice<n-(d-1); indice++){

                    if (v[indice] > maior){
                        maior = v[indice];
                        posicao = indice;
                    }
                }
                
                printf("%c", maior);
                
                d--;
            }
            printf("\n");
        }
    }
 
    return 0;
}