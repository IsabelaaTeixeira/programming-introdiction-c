#include <stdio.h>

int main(){

    int vum[1000], qum, qdois, c, aux, counter;

    scanf("%d", &qum);
    scanf("%d", &qdois);

    memset(vum,0,1000*sizeof(int));
     
    for(counter=0; counter<(qum+qdois);counter++)scanf("%d", &vum[counter]);

    for(counter=0 ; counter<(qum+qdois); counter++){


        for(c=counter+1; c < (qum+qdois) ; c++){
            if( vum[counter] > vum[c]){
                aux=vum[counter];
                vum[counter] = vum[c];
                vum[c] = aux;
                
            }
        }
    }

    for(counter=0; counter<(qum+qdois);counter++) printf("%d\n", vum[counter] );


    return 0;
}