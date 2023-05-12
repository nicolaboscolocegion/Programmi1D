//piccole operazioni con le variabili
#include<stdio.h>

int main(){
    
    int pluto=300;
    int paperino=3;

    //somma 
    int sum= pluto+paperino;

    //sottrazione
    int diff= pluto-paperino;

    //moltiplicazione
    int mul= pluto*paperino;

    //div
    int div= pluto/paperino;

    //modulo "aka il resto della divisione"
    int mod= pluto%paperino;
    
    printf("la somma e' %x",sum);

    return 0;
}
