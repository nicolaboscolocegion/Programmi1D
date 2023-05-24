#include<stdio.h>
int main(){
    int x=3;

    switch(x){//switcha per la variabile x
        case 0:// se x=0 esegue questa parte di codice
            printf("x=0\n");
        break;
        case 1:
            printf("x=1\n");
        break;
        case 3:
            printf("x=3\n");
        break;
        default://se il numero non e' tra i casi esegue il default (non obbligatorio)
            printf("default\n");
        break;
    }

    return 0;
}
