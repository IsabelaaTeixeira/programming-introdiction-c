#include <stdio.h>
#include <string.h>
#define N 10000

void qtd_leds(char * v);

int main(){
    int qtd, c, n;
    char v[N];

    scanf("%d", &qtd);
    for(c=0; c<qtd; c++){
        memset(v, 0, 10000*sizeof(char));
        scanf("%s", v);
        
        qtd_leds(v);
    }

    return 0;
}


void qtd_leds(char * v){
    int c=0, leds=0;

    while(v[c]!='\0'){
        switch (v[c]) {
            case '1':
                leds += 2;
                break;
            
            case '2':
                leds += 5; 
                break;

            case '3':
                leds += 5; 
                break;
                
            case '4':
                leds += 4; 
                break;
                
            case '5':
                leds += 5; 
                break;
                
            case '6':
                leds += 6; 
                break;
                
            case '7':
                leds += 3; 
                break;
                
            case '8':
                leds += 7; 
                break;
                
            case '9':
                leds += 6; 
                break;
                
            case '0':
                leds += 6; 
                break;
                
            default:
                break;
        }
        c++;
    }
    printf("%d leds\n", leds);
}